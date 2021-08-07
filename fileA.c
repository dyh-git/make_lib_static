#include <stdio.h>

extern void funB(void);

void funA(void)
{
	funB();
	printf("funA.\n");
}

void funA_one(void)
{
	printf("funA_one.\n");
}