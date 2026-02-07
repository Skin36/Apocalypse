#pragma once
#ifndef OPTION_H_INCLUDED
#define OPTION_H_INCLUDED


volatile uint32_t GAME_SCREEN_WIDTH;
volatile uint32_t GAME_SCREEN_HEIGHT;
uint32_t WINDOWED;

uint32_t set_resolution(uint32_t res_num);
#endif