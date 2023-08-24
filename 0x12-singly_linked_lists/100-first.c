#include "lists.h"

void before_main_function(void) __attribute__((constructor));

/**
 * before_main_function - Print a string before the main function is executed.
 */

void before_main_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
