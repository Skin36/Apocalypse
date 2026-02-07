#include <SDL.h>
#include <stdio.h>
#include "UFO2P.h"
#include "timer.h"
#include "window.h"
#include "cursor.h"
#include "soundsystem.h"
#include "struc_init.h"
#include <stdint.h>
#include <stdlib.h>


#define DEBUG


char selector;

int main(int argc, char* argv[])
{
	//printf("This program is executed with these command line ");
	//printf("arguments: ");
	selector = atoi(argv[0]);
	//printf(" %d", selector);
	


	//printf("%-20s", "this is a test");
	//_cprintf("%-20s", "this is a test");
	//remove("test.txt");
	//putchar('A');
	//_getch();

	

	if (video_init())
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init video!", NULL);
		return 1;
	}
	
	if (cursor_init())
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init cursor!", NULL);
		return 1;
	}

	if (timer_init())
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init timer!", NULL);
		return 2;
	}

	if (soundsystem_init())
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init sound!", NULL);
		return 3;
	}

	
	//init_game_path();
	//GAME_PATH = GAME_PATH1;
	//printf("%s", GAME_PATH);
	//play_music();
	//sdl_window_show();
	all_struct_alloc();
	return main_(argc, (const char**)argv, NULL);
}
