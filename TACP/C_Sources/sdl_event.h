#pragma once
#include <stdint.h>
#ifndef SDL_EVENT_H_INCLUDED
#define SDL_EVENT_H_INCLUDED
int SDL_events(void);
extern void mouse_update(uint8_t, int, int);
extern void keyboard_update(uint32_t);
// for C input
int key_press(char* key);
#endif
