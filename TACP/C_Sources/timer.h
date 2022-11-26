#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED
Uint32 GAME_TICK_COUNTER;
int timer_init();
void dos_delay(uint32_t time_l);
void remove_timer();
#endif