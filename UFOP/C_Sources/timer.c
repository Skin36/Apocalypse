#include <SDL.h>
#include <stdio.h>
#include "timer.h"




static Uint32 sdl_timer_callback(Uint32 interval);
Uint32 GAME_TICK_COUNTER=0;
SDL_TimerID m_timer_id;
Uint32 delay = 55;
//SDL_TimerID m_timer_id = 0;


        
Uint32 sdl_timer_callback(Uint32 interval)
{
    GAME_TICK_COUNTER++;     
    return (interval);
}


int timer_init()   
{
    int ret_val = 0;
    if (SDL_Init(SDL_INIT_TIMER))
    {
        printf("%s %s \n", "ERROR: Init SDL timer. ", SDL_GetError());
        ret_val |= -1;
    }
   
    m_timer_id = SDL_AddTimer(delay, sdl_timer_callback, NULL);
    if (!m_timer_id)
    {
        printf("%s %s \n", "ERROR: Add SDL timer. ", SDL_GetError());
        ret_val |= -1;
    }
    return ret_val;
}

void dos_delay(uint32_t time_l)
{
    SDL_Delay(time_l);
}


void remove_timer()
{
    SDL_RemoveTimer(m_timer_id);
    SDL_QuitSubSystem(SDL_INIT_TIMER);
}