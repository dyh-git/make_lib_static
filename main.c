#include <stdio.h>

extern void funA(void);
extern void funB(void);

int main()
{
	funA();
	funB();
	printf("main.\n");

	return 0;
}