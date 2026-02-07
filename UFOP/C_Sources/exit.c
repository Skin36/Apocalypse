#include <stdlib.h> 
#include "exit.h"
#include "struc_init.h"
#include "windows.h"
#include "soundsystem.h"
//#include "music.h"
//#include "sound.h"

void exit_all(int sel)
{
    free_all_mem();
    remove_timer();
    close_sound_system();
    close_video();
    exit(sel);
}


