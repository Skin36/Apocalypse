#include <stdint.h>
#include "option.h"

uint32_t set_resolution(uint32_t res_num)
{
    switch (res_num)
    {
    case 1:
        GAME_SCREEN_WIDTH = 640;
        GAME_SCREEN_HEIGHT = 480;
        WINDOWED = 0;
        break;
    case 2:
        GAME_SCREEN_WIDTH = 640;
        GAME_SCREEN_HEIGHT = 480;
        WINDOWED = 1;
        break;
    case 3:
        GAME_SCREEN_WIDTH = 800;
        GAME_SCREEN_HEIGHT = 600;
        WINDOWED = 0;
        break;
    case 4:
        GAME_SCREEN_WIDTH = 800;
        GAME_SCREEN_HEIGHT = 600;
        WINDOWED = 1;
        break;
    case 5:
        GAME_SCREEN_WIDTH = 1024;
        GAME_SCREEN_HEIGHT = 600;
        WINDOWED = 0;
        break;
    case 6:
        GAME_SCREEN_WIDTH = 1024;
        GAME_SCREEN_HEIGHT = 768;
        WINDOWED = 1;
        break;
    case 7:
        GAME_SCREEN_WIDTH = 1280;
        GAME_SCREEN_HEIGHT = 1024;
        WINDOWED = 0;
        break;
    case 8:
        GAME_SCREEN_WIDTH = 1280;
        GAME_SCREEN_HEIGHT = 1024;
        WINDOWED = 1;
        break;
    case 9:
        GAME_SCREEN_WIDTH = 1600;
        GAME_SCREEN_HEIGHT = 1024;
        WINDOWED = 0;
        break;
    case 10:
        GAME_SCREEN_WIDTH = 1600;
        GAME_SCREEN_HEIGHT = 1024;
        WINDOWED = 1;
        break;
    case 11:
        GAME_SCREEN_WIDTH = 1920;
        GAME_SCREEN_HEIGHT = 1200;
        WINDOWED = 0;
        break;
    case 12:
        GAME_SCREEN_WIDTH = 1920;
        GAME_SCREEN_HEIGHT = 1200;
        WINDOWED = 1;
        break;
    case 13:
        GAME_SCREEN_WIDTH = 2560;
        GAME_SCREEN_HEIGHT = 1440;
        WINDOWED = 0;
        break;
    case 14:
        GAME_SCREEN_WIDTH = 2560;
        GAME_SCREEN_HEIGHT = 1440;
        WINDOWED = 1;
        break;
    }
	return 0;
}


