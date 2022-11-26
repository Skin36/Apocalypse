#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include "window.h"
#include "keyboard.h"
//#include "palette.h"

SDL_Surface* m_surface = NULL;
extern uint8_t* temp_screen_buffer;
extern uint8_t* screen_buffer;
extern uint8_t* current_pal;

extern uint16_t screenx;
extern uint16_t screenx_1;
extern uint16_t screeny;
extern uint16_t screeny_1;
//extern uint8_t pal_01[300];


bool m_must_lock_surface = false;
void set_palette(void);

SDL_Renderer* m_renderer;
SDL_Texture* screen_texture;
SDL_Surface* image;
SDL_Texture* m_texture;

SDL_Rect m_texture_coord_in_surface = { 0 };
SDL_Window* m_window;





void out_to_screen(void)
{
	SDL_RenderClear(m_renderer);
	m_surface = SDL_CreateRGBSurfaceFrom(temp_screen_buffer, 640, 480, 8, 640, 0, 0, 0, 0);
	set_palette();
	screen_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);
	//SDL_SaveBMP(m_surface, "123456.bmp");


	//SDL_RenderClear(m_renderer);
	SDL_RenderCopy(m_renderer, screen_texture, NULL, NULL);
	SDL_RenderPresent(m_renderer);
	SDL_Delay(50);
	//SDL_SaveBMP(m_surface, "123456.bmp");

	//screen_data_init((uint8_t*)isobord1_dat, 640, 480, 640, 128, 0, 400);

	/*
	SDL_Event event;
	while (1)
	{
		if (SDL_PollEvent(&event))
		{
			if (event.type == SDL_MOUSEBUTTONDOWN)
			{
				break;
			}
		}
	}
*/
//SDL_DestroyWindow(m_window);
//SDL_Quit();
}

void out_to_screen_2(void)
{
	SDL_Rect m_texture_coord_in_surface;

	m_texture_coord_in_surface.x = screenx;
	m_texture_coord_in_surface.y = screeny;
	m_texture_coord_in_surface.w = screenx - screenx_1;
	m_texture_coord_in_surface.h = screeny - screeny_1;

	//printf("screenx_1= %d,screenx= %d,screeny= %d\n", screenx_1, screenx, screeny);
	if (screenx_1 < screenx && screeny_1 < screeny)
	{
		m_texture_coord_in_surface.x = screenx;
		m_texture_coord_in_surface.y = screeny;
		m_texture_coord_in_surface.w = screenx - screenx_1;
		m_texture_coord_in_surface.h = screeny - screeny_1;


		//SDL_RenderClear(m_renderer);
		m_surface = SDL_CreateRGBSurfaceFrom(temp_screen_buffer, 640, 480, 8, 640, 0, 0, 0, 0);
		set_palette();
		screen_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);
		SDL_RenderCopy(m_renderer, screen_texture, NULL, NULL);
		//SDL_RenderCopy(m_renderer, screen_texture, NULL, &m_texture_coord_in_surface);
		SDL_RenderPresent(m_renderer);
		SDL_Delay(50);
	}
}


void set_palette()
{
	SDL_Color color;
	SDL_Palette* p = m_surface->format->palette;
	int ret_val = 0;

	int n = 0;
	for (int i = 0; i < 256; i++)
	{
		color.r = (current_pal[n * 3] << 2 | (current_pal[n * 3] >> 4 & 0x3));
		color.g = (current_pal[n * 3 + 1] << 2 | (current_pal[n * 3 + 1] >> 4 & 0x3));
		color.b = (current_pal[n * 3 + 2] << 2 | (current_pal[n * 3 + 2] >> 4 & 0x3));
		color.a = 0;
		n++;
		ret_val |= SDL_SetPaletteColors(p, &color, i, 1);
		//printf ("r= %d,g= %d,b= %d\n", pal_ptr[n * 3], pal_ptr[n * 3 + 1], pal_ptr[n * 3 + 2]);
		//printf("r1= %d,r2= %d\n", (pal_ptr[n * 3] << 2 | (pal_ptr[n * 3] >> 4 & 0x3)), 4*pal_ptr[n * 3]);
		//SDL_SetPalette(result, SDL_LOGPAL, colors, 0, 256);
	}
	ret_val |= SDL_SetSurfacePalette(m_surface, p);
	//SDL_SaveBMP(m_surface, "12345.bmp");
}

void palette_correct(uint32_t index, uint32_t red, uint32_t green, uint32_t blue)
{
	current_pal[index * 3] = red;
	current_pal[index * 3 + 1] = green;
	current_pal[index * 3 + 2] = blue;
	set_palette();
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
		set_palette();
		//printf("r1= %d,g1= %d,b1= %d\n", r1, g1 ,b1);
		++n;
		index++;
	} while (index != 229);

}


int screen_data_init(uint8_t* screen_buffer, int surface_width, int surface_height, int img_width, int img_height, int offset_x, int offset_y);
//int create_texture_from_surface(SDL_Surface* surface, SDL_Rect* texture_rect);


void screenshot(char* path)
{
	SDL_SaveBMP(m_surface, path);
}





int video_init()
{
	int ret_val = 0;
	//int imgFlags = IMG_INIT_PNG;
	//IMG_Init(imgFlags);

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
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);

	if (!m_window)
	{
		printf("%s %s \n", "ERROR: created window. ", SDL_GetError());
		ret_val |= 1;
		return ret_val;
	}

	m_renderer = SDL_CreateRenderer(m_window, -1, 0);
	//SDL_RenderPresent(m_renderer);
	//PCX_Load("UFODATA\\TITLES.PCX");
	//SDL_RenderPresent(m_renderer);


	//SDL_Event event;

	//while (1)
	//{
	  //  if (SDL_PollEvent(&event)) 
		//{ 
		//if (event.type == SDL_MOUSEBUTTONDOWN)
		//{
			//free_win();
			//SDL_Quit();
			//exit(0);
		//}
	//  }
	//}

	//for (; events.type != SDL_QUIT && events.type != SDL_KEYDOWN; SDL_PollEvent(&events));

	//SDL_DestroyWindow(m_window);
	//SDL_Quit();

	return ret_val;
}

/*
sdl_window_show()
{

SDL_Window* window = SDL_CreateWindow("Apocalypse",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
SDL_Event events;
// Main loop

while (1) {
	SDL_Delay(100);

	// Event loop
	while (SDL_PollEvent(&events) != 0) {
		// check event type
		switch (events.type) {
		case SDL_QUIT:
			// shut down
			break;
		case SDL_KEYDOWN:
			// test keycode
			switch (events.key.keysym.sym) {
			case SDLK_q:
				printf("%s \n", "Volume UP");
				break;
			case SDLK_w:

				printf("%s \n", "Volume DOWN");
				break;
			case SDLK_p:
				SDL_PauseAudio(1);
				printf("%s \n", "music_stop");
				break;
			case SDLK_o:
				SDL_PauseAudio(0);
				printf("%s \n", "music_on");
				break;
				// etc
			}
			break;
		}
	}

	// Wait before next frame

}

SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
SDL_Quit();
}

*/

int screen_data_init(uint8_t* screen_buffer, int surface_width, int surface_height, int img_width, int img_height, int offset_x, int offset_y)
{
	int ret_val = 0;
	//ret_val |= destroy();
	m_surface = SDL_CreateRGBSurfaceWithFormatFrom(screen_buffer, surface_width, surface_height, 8, 3 * surface_width, SDL_PIXELFORMAT_INDEX8);



	if (m_surface == NULL) {
		SDL_Log("Creating surface failed: %s", SDL_GetError());
		//stbi_image_free(screen_buffer);
		exit(1);
	}

	if (!m_surface)
	{
		printf("%s \n", "ERROR: created screen surface.");
		return -1;
	}
	//m_must_lock_surface = SDL_MUSTLOCK(m_surface);

	if (surface_width - offset_x < 0 || surface_height - offset_y < 0)
	{
		printf("%s \n", "ERROR: screen data invalid surface and offset params.");
		ret_val |= -1;
	}

	m_texture_coord_in_surface.x = offset_x;
	m_texture_coord_in_surface.y = offset_y;
	m_texture_coord_in_surface.w = img_width;
	m_texture_coord_in_surface.h = img_height;


	//SDL_RenderClear(m_renderer);

	//SDL_LockSurface(m_surface);
	//SDL_UnlockSurface(m_surface);
	//m_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);
	//ret_val |= SDL_CreateTextureFromSurface(m_renderer, m_surface);

	SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
	SDL_RenderPresent(m_renderer);

	return 0;
}



void close_video(void)
{
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
	SDL_VideoQuit();
	SDL_Quit();
}

