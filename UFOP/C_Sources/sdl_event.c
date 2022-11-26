#include <SDL.h>
#include "sdl_event.h"
#include "keyboard.h"

int mouse_x_pos;
int mouse_y_pos;
uint32_t akey;
uint8_t MOUSE_BUTTONS_STATE;
int get_cursor_pos(void);
int x, y;

int SDL_events()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {

        if (event.type == SDL_MOUSEBUTTONDOWN)
        {
            if (event.button.button == SDL_BUTTON_LEFT)
            {
                MOUSE_BUTTONS_STATE = 2;
            }
            else if (event.button.button == SDL_BUTTON_RIGHT)
            {
                MOUSE_BUTTONS_STATE = 8;//|
            }
        }
        else if (event.type == SDL_MOUSEBUTTONUP)
        {
            if (event.button.button == SDL_BUTTON_LEFT)
            {
                MOUSE_BUTTONS_STATE = 4;
            }
            else if (event.button.button == SDL_BUTTON_RIGHT)
            {
                MOUSE_BUTTONS_STATE = 16;
            }
        }
        else
        {
            if (event.type == SDL_KEYDOWN)
            {
                akey = code_conv(event.key.keysym.sym);
                if (akey < 255)
                {
                    keyboard_update(akey);
                }
                else
                {
                    keyboard_update(224);
                    keyboard_update(akey >> 8);
                }
            }
            if (event.type == SDL_KEYUP)
            {
                akey = code_conv(event.key.keysym.sym);
                if (akey < 255)
                {
                    keyboard_update(akey + 128);
                }
                else
                {
                    keyboard_update(224);
                    keyboard_update((akey >> 8) + 128);
                }
            }
        }
    }
    
    get_cursor_pos();
    return 0;

}

int get_cursor_pos(void)
{
    SDL_GetMouseState(&mouse_x_pos, &mouse_y_pos);
    if (MOUSE_BUTTONS_STATE) {

        //printf("%d \n", MOUSE_BUTTONS_STATE);
        //printf("x= %d  y= %d\n", mouse_x_pos, mouse_y_pos);
        mouse_update(MOUSE_BUTTONS_STATE, mouse_y_pos, mouse_x_pos);
      
        MOUSE_BUTTONS_STATE = 0;
    }

    return 0;
}