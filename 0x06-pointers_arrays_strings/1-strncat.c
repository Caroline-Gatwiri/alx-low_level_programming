#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: dest of the string we append to
 * @src: string to add(source)
 * @n: str bytes to append
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[a] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
