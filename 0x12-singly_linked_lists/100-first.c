#include <stdio.h>
void myStartupFun(void)__attribute__ ((constructor));

/**
 * myStartupFun - a function that runs before main.
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
