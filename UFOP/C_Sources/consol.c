#include <consol.h>
#include <stdio.h>


extern char aconsole[];
//uint32_t cheat_money;



void test_c(void) {

	printf("%s", aconsole);
	*aconsole = NULL;
	};