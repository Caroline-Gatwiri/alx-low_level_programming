#include "main.h"
#include <string.h>
/**
 * print_rev - prints the reverse of the string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
