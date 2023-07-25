#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of the string
 * @str : string
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string  = strlen(str);
	int n = (length_of_the_string) / 2;

	if (length_of_the_string % 2 == 1)
	{
		n++;
	}
	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
