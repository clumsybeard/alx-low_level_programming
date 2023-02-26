#include <stdio.h>

/**
 * main-entry point
 * return: Always 1 (Success)
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fprintf(stderr, "%s", q);
	return(1);
}
