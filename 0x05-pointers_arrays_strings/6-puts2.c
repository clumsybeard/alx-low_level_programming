#include main.h

/**
 * puts2 - Entry point
 * Description: Prints every other character
 * @str: Character
 * Return: string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i f(i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
