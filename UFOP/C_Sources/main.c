#include <SDL.h>
//#include <stdio.h>
//#include <SDL_audio.h>
//#include <SDL_mixer.h>
//#include "UFO2P4.h"
#include "music.h"
#include "timer.h"
#include "window.h"


#define DEBUG


int main(int argc, char* argv[])
{

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

	if (sound_init())
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init sound!", NULL);
		return 3;
	}


	//init_game_path();
	//GAME_PATH = GAME_PATH1;
	//printf("%s", GAME_PATH);
	play_music();
	//sdl_window_show();
	
	return main_(argc, (const char**)argv, NULL);
	//return 0;
}





/*

	void free_win()
	{
	
	}


   
   SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    SDL_Window* window = SDL_CreateWindow("Apocalipse",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	//cursor define

   
	SDL_Event events;

//define cursor
//---------------------------------------------------------
	 SDL_Cursor* ufo_cursor = NULL;
	 ufo_cursor = init_system_cursor();
	 SDL_SetCursor(ufo_cursor);
//---------------------------------------------------------
	play_music();
	timer_init();



	// Main loop
	while (1) {
		SDL_Delay(100);

		// Event loop
		while (SDL_PollEvent(&events) != 0) {
			// check event type
			switch (events.type) {
			case SDL_QUIT:
				// shut down
				break;
			case SDL_KEYDOWN:
				// test keycode
				switch (events.key.keysym.sym) {
				case SDLK_q:
					volume += 20;
					printf("%s \n", "Volume UP");
					break;
				case SDLK_w:
					volume -= 20;
					printf("%s \n", "Volume DOWN");
					break;
				case SDLK_p:
					SDL_PauseAudio(1);
					printf("%s \n", "music_stop");
					break;
				case SDLK_o:
					SDL_PauseAudio(0);
					printf("%s \n", "music_on");
					break;



					// etc
				}
				break;

     
		  
			}
		}

		// Wait before next frame
	
	}


	Mix_CloseAudio();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
	*/
