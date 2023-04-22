#include <stdlib.h> 
#include "exit.h"
//#include "timer.h"
//#include "music.h"
//#include "sound.h"

void exit_all(int sel)
{
    //remove_timer();
    //close_music();
    //close_sound();
    close_video();
    exit(sel);
}


