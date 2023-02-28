#include "main.h"
/**
 * print_rev - Entry point
 * Description - prints string in reverse
 * @s: integer
 * Return: char
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar([i]);
	_putchar('\n');
}
