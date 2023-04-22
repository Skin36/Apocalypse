#include <SDL.h>
#include <stdlib.h>

#include "window.h"
#include "timer.h"
#include "sound.h"
#include "debug.h"
#include "TACP.h"

#define DEBUG

char selector;

int main(int argc, char* argv[])
{

	printf("This program is executed with these command line ");
	printf("arguments: ");
	selector = atoi(argv[0]);
	printf(" %d", selector);

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
/*
	if (sound_init())
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init sound!", NULL);
	}
*/

	return main_(argc, (const char**)argv, NULL);
	//return 0;


}
