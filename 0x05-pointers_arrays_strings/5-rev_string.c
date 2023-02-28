#include "main.h"

/**rev-string - Entry point
 * Description: Code that reverses a string
 * @s; Integer
 * Return: char
 */

void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = 0;

	while (s[len]) != '\0')
	{
		len++;
	}
	1 = 0;
	j = len - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
