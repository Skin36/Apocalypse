#include <stdio.h>
#include <SDL.h>
#include "cursor.h"



SDL_Cursor* ufo_cursor = NULL;
SDL_Surface* cur_surface = NULL;
void set_cur_palette(void);
extern uint8_t* current_pal;


static const char* cur_image[] = {
    /* width height num_colors chars_per_pixel */
    "    24    24        3            1",
    /* colors */
    "X c #000000",
    ". c #ffffff",
    "  c None",
    /* pixels */
    "X                       ",
    "XX                      ",
    "X.X                     ",
    "X..X                    ",
    "X...X                   ",
    "X....X                  ",
    "X.....X                 ",
    "X......X                ",
    "X.......X               ",
    "X........X              ",
    "X.........X             ",
    "X..........X            ",
    "X...........X           ",
    "X....XXXXXXXXX          ",
    "X...X                   ",
    "X..X                    ",
    "X.X                     ",
    "XX                      ",
    "X                       ",
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "0,0"
};





int draw_cursor(uint8_t* cur_img)
{
	
    cur_surface = SDL_CreateRGBSurfaceFrom(cur_img, 24, 24, 8, 24, 0, 0, 0,0);
    set_cur_palette();
    ufo_cursor = SDL_CreateColorCursor(cur_surface, 0, 0);
    SDL_SetCursor(ufo_cursor);
       
    return 1;
}


void set_cur_palette()
{
	SDL_Color color;
	SDL_Palette* p = cur_surface->format->palette;
	int ret_val = 0;

	int n = 0;
	for (int i = 0; i < 256; i++)
	{
		if (n == 0)
		{
			color.r = (current_pal[n * 3] << 2 | (current_pal[n * 3] >> 4 & 0x3));
			color.g = (current_pal[n * 3 + 1] << 2 | (current_pal[n * 3 + 1] >> 4 & 0x3));
			color.b = (current_pal[n * 3 + 2] << 2 | (current_pal[n * 3 + 2] >> 4 & 0x3));
			color.a = 0;
		}
		else
		{ 
			color.r = (current_pal[n * 3] << 2 | (current_pal[n * 3] >> 4 & 0x3));
			color.g = (current_pal[n * 3 + 1] << 2 | (current_pal[n * 3 + 1] >> 4 & 0x3));
			color.b = (current_pal[n * 3 + 2] << 2 | (current_pal[n * 3 + 2] >> 4 & 0x3));
			color.a = 255;
        }
		n++;
		ret_val |= SDL_SetPaletteColors(p, &color, i, 1);
	}
	ret_val |= SDL_SetSurfacePalette(cur_surface, p);

}


static SDL_Cursor* init_system_cursor(const char* image[])
{
    int i, row, col;
    uint8_t data[4 * 24];
    uint8_t mask[4 * 24];
    int hot_x, hot_y;

    i = -1;
    for (row = 0; row < 24; ++row) {
        for (col = 0; col < 24; ++col) {
            if (col % 8) {
                data[i] <<= 1;
                mask[i] <<= 1;
            }
            else {
                ++i;
                data[i] = mask[i] = 0;
            }
            switch (cur_image[4 + row][col]) {
            case 'X':
                data[i] |= 0x01;
                mask[i] |= 0x01;
                break;
            case '.':
                mask[i] |= 0x01;
                break;
            case ' ':
                break;
            }
        }
    }
    sscanf_s(cur_image[4 + row], "%d,%d", &hot_x, &hot_y);
    return SDL_CreateCursor(data, mask, 24, 24, hot_x, hot_y);
}


int cursor_init()
{
    int ret_val = 0;

    //init_system_cursor();
    if (ret_val)
    {
        printf("%s \n", "ERROR: Init cursor.");
    }

    ufo_cursor = init_system_cursor(cur_image);
    SDL_SetCursor(ufo_cursor);
    return ret_val;
}



void curr_exit()
{
	SDL_FreeCursor(ufo_cursor);
	SDL_FreeSurface(cur_surface);
}






