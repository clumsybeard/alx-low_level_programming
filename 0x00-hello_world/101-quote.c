#include <stdio.h>

/**
 * main - prints to a string
 * Description: Prints  without puts
 * return: 1
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", q);
	return (1);
}
