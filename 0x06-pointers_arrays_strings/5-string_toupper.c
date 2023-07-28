#include "main.h"
/**
 * string_toupper - converts string to uppercase
 * @s: the string
 * Return: string
 */
char *string_toupper(char *s)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
	}
	return (s);
}
