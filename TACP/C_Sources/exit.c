#include <stdlib.h> 
#include "exit.h"
#include "window.h"
#include "struc_init.h"
//#include "timer.h"
//#include "music.h"
//#include "sound.h"

void exit_all(int sel)
{
    free_all_mem();
    //remove_timer();
    //close_music();
    //close_sound();
    close_video();
    exit(sel);
}


