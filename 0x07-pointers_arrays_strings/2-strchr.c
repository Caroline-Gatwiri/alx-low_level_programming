#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character whose pointer to 1st occurrence is returned
 * Return: pointer to first occurence if char found, Null , otherwise
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return ('\0');
}
