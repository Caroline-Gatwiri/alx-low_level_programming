#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: dest string to be copied
 * @src: source of the string
 * @n: bytes of the str
 * Return:returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

