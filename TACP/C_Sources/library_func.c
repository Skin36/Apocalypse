/////////////////////////////////////
// All calls here from UFO@4P.asm //
/////////////////////////////////////

#if defined(_MSC_VER)
#    include <direct.h>
#endif
#include <malloc.h>
#include <stdio.h>
#include <dos.h>
#include <io.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <fcntl.h>




intptr_t hFile;



libr()
{	
	_cprintf("");
	//sprintf(""," ");
	_findclose(hFile);
}


