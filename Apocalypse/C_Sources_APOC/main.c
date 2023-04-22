#include<process.h>
//#include "restart.h"


int main(int select)
{
	int selector = 3;

	//restart game 
	if (selector == 3)
		_execl("XCOMAPOC_W.exe", "Apocalypse.exe", "hello", "10", NULL);
	return 0;
}
