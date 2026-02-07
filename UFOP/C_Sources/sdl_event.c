#include <SDL.h>
//#include <stdbool.h>
#include "sdl_event.h"
#include "keyboard.h"
#include "consol.h"
#include "option.h"


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
                akey = code_conv(event.key.keysym.scancode);
                
              
               
                if (akey == 60) {
                    console_screen();
                    test_c();
                }
                               
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
                akey = code_conv(event.key.keysym.scancode);
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
    //mouse_x_pos = mouse_x_pos * 640 / GAME_SCREEN_WIDTH;
   // mouse_y_pos = mouse_y_pos * 480 / GAME_SCREEN_HEIGHT;
    mouse_update(MOUSE_BUTTONS_STATE, mouse_y_pos, mouse_x_pos);
    MOUSE_BUTTONS_STATE = 0;
    return 0;
}