#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initialsegment
 * @accept: contains only a no of bytes from initial segment
 * Return: initial segment of s no of bytes only of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int incr = 0;
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*p == *s)
			{
				break;
			}
		}
		if (!*p)
			break;
		incr++;
	}
	return (incr);
}
