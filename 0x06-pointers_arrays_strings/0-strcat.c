#include "main.h"
/**
 * _strcat - it concatenates two strings
 * @dest: string which we append to
 * @src: the string to add
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
