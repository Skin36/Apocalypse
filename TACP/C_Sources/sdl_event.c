#include <SDL.h>
#include "sdl_event.h"
#include "keyboard.h"
#include <stdbool.h>

int mouse_x_pos;
int mouse_y_pos;
uint32_t akey;
uint8_t MOUSE_BUTTONS_STATE;
int get_cursor_pos(void);
int x, y;

// for C input

int key_press(char* key);
int input[256];

int key_press(char* key) {

    uint8_t code_a = (uint8_t)*key;
    if (code_a < 95)
        code_a += 32;

    if (input[code_a - 93])
        return 1;
    return 0;

}




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
                if (akey < 255)
                {
                    keyboard_update(akey);
                    input[event.key.keysym.scancode] = true; //for C
                }
                else
                {
                    keyboard_update(224);
                    keyboard_update(akey >> 8);
                }
            }
            if (event.type == SDL_KEYUP)
            {
                input[event.key.keysym.scancode] = false;//for C

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
    mouse_update(MOUSE_BUTTONS_STATE, mouse_y_pos, mouse_x_pos);
    MOUSE_BUTTONS_STATE = 0;
    return 0;
}