#include <SDL.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "cursor.h"
#include "window.h"
#include "keyboard.h"
#include "option.h"

//#include "palette.h"

int set_palette(void);
void recalc_screen_rect();
void clear_screen_sdl(void);
int destroy(void);

SDL_Surface* m_surface = NULL;
// for temp reason
uint8_t* SCREEN_BUFFER_PTR_t;
// last screen buf for update
uint8_t* SCREEN_BUFFER_PTR_l;
// main screen buf 640x480
extern uint8_t* SCREEN_BUFFER_PTR;


extern uint16_t* map_view_flag;

extern uint16_t screenx;
extern uint16_t screenx_1;
extern uint16_t screeny;
extern uint16_t screeny_1;

bool m_must_lock_surface = false;

SDL_Renderer* m_renderer;
SDL_Surface* image;
SDL_Texture* m_texture;
SDL_Rect m_texture_coord_in_surface = { 0 };
SDL_Window* m_window;

void clear_screen_sdl(void)
{
	 SDL_RenderClear(m_renderer);
}

static void init_screen_mem(void)//new
{
	set_resolution(0);
	
	uint32_t SCREEN_SIZE = GAME_SCREEN_WIDTH * GAME_SCREEN_HEIGHT;
	SCREEN_BUFFER_PTR_t = (uint8_t*)malloc(640 * 480);
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
	SDL_Color color;
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
	pal_1+= 48;
	pal_2+= 48;
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
	}
	while (index != 229);

}


void screenshot(char *path)
{
	m_surface = SDL_CreateRGBSurfaceFrom(SCREEN_BUFFER_PTR, 640, 480, 8, 640, 0, 0, 0, 0);
	set_palette();
	SDL_SaveBMP(m_surface, path);
	destroy();
}


int video_init()
{
    int ret_val = 0;
	init_screen_mem(); //NEW
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
		printf("monitor_width %d \n", monitor_width);
		printf("%d \n", monitor_height);
    }
	
	    //m_window = SDL_CreateWindow("Apocalypse",
		//SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, GAME_SCREEN_WIDTH, GAME_SCREEN_HEIGHT, WINDOWED);
		//SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, GAME_SCREEN_WIDTH, GAME_SCREEN_HEIGHT, WINDOWED);
		//SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 1);
		m_window = SDL_CreateWindow("Apocalypse",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 1);

	if (!m_window)
	{
		printf("%s %s \n", "ERROR: created window. ", SDL_GetError());
		ret_val |= 1;
		return ret_val;
	}

	//m_renderer = SDL_CreateRenderer(m_window, -1, 1);// 0 to def
	m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);// 0 to def
	
	if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "2"))
	{
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
		{
			printf("%s %s \n", "ERROR: Could't set render scale quality. ", SDL_GetError());
		}
	}
    
	SDL_SetRenderTarget(m_renderer, NULL);
	SDL_SetRenderDrawBlendMode(m_renderer, SDL_BLENDMODE_BLEND);
	m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_STREAMING, 640, 480);
	SDL_SetTextureBlendMode(m_texture, SDL_BLENDMODE_NONE);
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
/*
int fill_texture_from_surface()
{
	int ret_val = 0;
	int* bytes;
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


int fill_screen_surface()
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
*/

void recalc_screen_rect()
{
	uint32_t width_x1;
	uint32_t width_x2;
	uint32_t width_x3;

	uint16_t y;
	uint16_t rect_size = screenx_1 + 640 * screeny_1;
	uint16_t width_y = screeny - screeny_1;
	uint16_t width_x = screenx - screenx_1;

	if (width_x >= 4)
	{
		width_x1 = 4 - (screenx_1 & 3);
		width_x2 = (width_x - (4 - (screenx_1 & 3u))) >> 2;
		width_x3 = (screenx - screenx_1 - (4 - (screenx_1 & 3))) & 3;
	}
	else
	{
		width_x1 = screenx - screenx_1;
		width_x2 = 0;
		width_x3 = 0;
	}
	*SCREEN_BUFFER_PTR_t += rect_size;
	*SCREEN_BUFFER_PTR += rect_size;

	do
	{
		if (width_x1)
		{
			memcpy(&SCREEN_BUFFER_PTR_t, &SCREEN_BUFFER_PTR, width_x1);
			*SCREEN_BUFFER_PTR_t += width_x1;
			*SCREEN_BUFFER_PTR += width_x1;
		}
		if (width_x2)
		{
			memcpy(&SCREEN_BUFFER_PTR_t, &SCREEN_BUFFER_PTR, 4 * width_x2);
			*SCREEN_BUFFER_PTR_t += 4 * width_x2;
			*SCREEN_BUFFER_PTR += 4 * width_x2;
		}
		if (width_x3)
		{
			memcpy(&SCREEN_BUFFER_PTR_t, &SCREEN_BUFFER_PTR, width_x3);
			*SCREEN_BUFFER_PTR_t += width_x3;
			*SCREEN_BUFFER_PTR += width_x3;
		}

		--width_y;
	}
	while (width_y);

	
	//memcpy(SCREEN_BUFFER_PTR_t, dist, 640 * 480);
	
}