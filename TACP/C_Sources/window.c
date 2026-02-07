#include <SDL.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "cursor.h"
#include "window.h"
#include "keyboard.h"

//#include "palette.h"

int set_palette(void);
void recalc_screen_rect(uint8_t* SCR_t, uint8_t* SCR);
void clear_screen_sdl(void);
int destroy(void);


SDL_Surface* m_surface = NULL;

uint8_t* SCREEN_BUFFER_PTR_t;
extern uint8_t* SCREEN_BUFFER_PTR;
extern uint16_t* map_view_flag;

//extern uint8_t* current_pal;

extern uint16_t screenx;
extern uint16_t screenx_1;
extern uint16_t screeny;
extern uint16_t screeny_1;
//extern uint8_t pal_01[300];


bool m_must_lock_surface = false;

SDL_Renderer* m_renderer;
SDL_Surface* image;
SDL_Texture* m_texture;
SDL_Rect m_texture_coord_in_surface = { 0 };
SDL_Window* m_window;

/*
void surf_init(void)
{
	m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);

}
*/


void clear_screen_sdl(void)
{
	SDL_RenderClear(m_renderer);
}

void redraw(void)

{

	SDL_RenderClear(m_renderer);
	m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);
	set_palette();
	//fill_texture_from_surface();
	m_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);
	SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
	SDL_RenderPresent(m_renderer);
	SDL_Delay(5);
	destroy();
}

void redraw2(void)

{
	m_texture_coord_in_surface.x = screenx_1;
	m_texture_coord_in_surface.y = screeny_1;
	m_texture_coord_in_surface.w = screenx - screenx_1;
	m_texture_coord_in_surface.h = screeny - screeny_1;
	memcpy(SCREEN_BUFFER_PTR_t, SCREEN_BUFFER_PTR, 640 * 480);
	//printf("screenx_1= %d,screenx= %d,screeny_1= %d,screeny= %d\n", screenx_1, screenx, screeny_1, screeny);
	if (screenx_1 < screenx && screeny_1 < screeny)
	{
		recalc_screen_rect(SCREEN_BUFFER_PTR_t, SCREEN_BUFFER_PTR);
		m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);
		set_palette();
		m_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);
		SDL_RenderCopy(m_renderer, m_texture, &m_texture_coord_in_surface, &m_texture_coord_in_surface);
		SDL_RenderPresent(m_renderer);
		SDL_Delay(5);
		destroy();
	}
}



int set_palette()
{
	int ret_val = 0;
	SDL_Color color = {0};
	if (m_must_lock_surface)
	{
		ret_val |= SDL_LockSurface(m_surface);
	}

	SDL_Palette* p = m_surface->format->palette;
	if (!p)
	{
		ret_val |= 1;
	}

	int n = 0;
	for (int i = 0; i < 256; i++)
	{
		color.r = (current_pal[n * 3] << 2 | (current_pal[n * 3] >> 4 & 0x3));
		color.g = (current_pal[n * 3 + 1] << 2 | (current_pal[n * 3 + 1] >> 4 & 0x3));
		color.b = (current_pal[n * 3 + 2] << 2 | (current_pal[n * 3 + 2] >> 4 & 0x3));
		color.a = 0;
		n++;
		ret_val |= SDL_SetPaletteColors(p, &color, i, 1);
	}
	ret_val |= SDL_SetSurfacePalette(m_surface, p);

	if (ret_val)
	{
		printf("%s %s \n", "ERROR: set screen palette. ", SDL_GetError());
	}

	if (m_must_lock_surface)
	{
		SDL_UnlockSurface(m_surface);
	}
	return ret_val;
}

void palette_correct(uint32_t index, uint32_t red, uint32_t green, uint32_t blue)
{
	current_pal[index * 3] = red;
	current_pal[index * 3 + 1] = green;
	current_pal[index * 3 + 2] = blue;
	//set_palette();
}

void palette_mix(uint32_t mix_index, uint8_t* pal_1, uint8_t* pal_2)
{
	uint8_t r1, r2, g1, g2, b1, b2;
	uint32_t index = 16;
	int n = 0;
	pal_1 += 48;
	pal_2 += 48;
	do
	{
		r1 = pal_1[n * 3];
		r2 = pal_2[n * 3];

		g1 = pal_1[n * 3 + 1];
		g2 = pal_2[n * 3 + 1];

		b1 = pal_1[n * 3 + 2];
		b2 = pal_2[n * 3 + 2];

		current_pal[index * 3] = r2 + ((mix_index * (r1 - r2)) >> 5);
		current_pal[index * 3 + 1] = g2 + ((mix_index * (g1 - g2)) >> 5);
		current_pal[index * 3 + 2] = b2 + ((mix_index * (b1 - b2)) >> 5);
		//set_palette();
		++n;
		index++;
	} while (index != 229);

}


void screenshot(char* path)
{
	m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);
	set_palette();
	SDL_SaveBMP(m_surface, path);
	destroy();
}

int video_init()
{
	int ret_val = 0;
	SCREEN_BUFFER_PTR_t = (uint8_t*)malloc(307200);
	if (SDL_Init(SDL_INIT_VIDEO))
	{
		printf("%s %s \n", "ERROR: init SDL video. ", SDL_GetError());
		ret_val |= 1;
		return ret_val;

		SDL_DisplayMode DM;
		if (SDL_GetCurrentDisplayMode(0, &DM))
		{
			printf("%s %s \n", "ERROR: get display mode. ", SDL_GetError());
			ret_val |= 1;
		}
		int monitor_width = DM.w;
		int monitor_height = DM.h;
	}

	m_window = SDL_CreateWindow("Apocalypse",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 1);

	if (!m_window)
	{
		printf("%s %s \n", "ERROR: created window. ", SDL_GetError());
		ret_val |= 1;
		return ret_val;
	}

	m_renderer = SDL_CreateRenderer(m_window, -1, 0);
	SDL_SetRenderTarget(m_renderer, NULL);
	SDL_SetRenderDrawBlendMode(m_renderer, SDL_BLENDMODE_BLEND);
	//SDL_RenderPresent(m_renderer);
	//m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);






	//m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);
	//SDL_TEXTUREACCESS_STREAMING

	/*
	m_surface = SDL_CreateRGBSurfaceWithFormatFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, SDL_PIXELFORMAT_INDEX8);
	if (!m_surface)
	{
		printf("%s %s \n", "ERROR: created screen surface.", SDL_GetError());
	}
	m_must_lock_surface = SDL_MUSTLOCK(m_surface);
	*/

	//m_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);
	m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_STREAMING, 640, 480);
	SDL_SetTextureBlendMode(m_texture, SDL_BLENDMODE_NONE);
	//m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);
	//set_palette();
	//screen_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);

	//SDL_RenderPresent(m_renderer);
	return ret_val;
}




void close_video()
{
	destroy();
	free(SCREEN_BUFFER_PTR_t);
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
	SDL_VideoQuit();
	SDL_Quit();
}

int destroy()
{
	if (m_surface)
	{
		SDL_FreeSurface(m_surface);
		m_surface = NULL;
	}

	if (m_texture)
	{
		SDL_DestroyTexture(m_texture);
		m_texture = NULL;
	}
	return 1;
}

static int fill_texture_from_surface()
{
	int ret_val = 0;
	int* bytes = 0;
	int pitch = 0;
	if (SDL_LockTexture(m_texture, NULL, (void**)&bytes, &pitch) != 0)
		printf("%s %s \n", "ERROR: init SDL video. ", SDL_GetError());
	bool must_lock = SDL_MUSTLOCK(m_surface);
	if (must_lock)
	{
		ret_val |= SDL_LockSurface(m_surface);
	}

	for (int y = 0; y < 480; y++)
	{
		for (int x = 0; x < 640; x++)
		{
			uint8_t index = ((uint8_t*)m_surface->pixels)[(y + 480) * m_surface->w + x + 640];
			//printf("index = %d,\n", index);
			((SDL_Color*)bytes)[y * 640 + x] = m_surface->format->palette->colors[index];
		}
	}


	if (must_lock)
	{
		SDL_UnlockSurface(m_surface);
	}
	SDL_UnlockTexture(m_texture);
	return ret_val;
}

static int fill_screen_surface()
{
	uint8_t* destin;
	int ret_val = 0;
	if (m_must_lock_surface)
	{
		ret_val |= SDL_LockSurface(m_surface);
	}
	destin = (uint8_t*)m_surface->pixels;
	for (int y = 0; y < 480; y++)
	{
		memcpy(destin, SCREEN_BUFFER_PTR, 640);
		destin += m_surface->w;
		SCREEN_BUFFER_PTR += 640;
	}
	if (m_must_lock_surface)
	{
		SDL_UnlockSurface(m_surface);
	}
	return ret_val;
}

void recalc_screen_rect(uint8_t* dist, uint8_t* source)
{
	int y;
	uint16_t rect_size = screenx_1 + 640 * screeny_1;
	uint16_t width_y = screeny - screeny_1;
	uint16_t width_x = screenx - screenx_1;
	dist += rect_size;
	source += rect_size;


	for (y = 0; y < width_y; y++)
	{
		memcpy(dist, source, width_x);
		dist += 640;
		source += 640;

	}
	memcpy(SCREEN_BUFFER_PTR_t, dist, 640 * 480);
}
