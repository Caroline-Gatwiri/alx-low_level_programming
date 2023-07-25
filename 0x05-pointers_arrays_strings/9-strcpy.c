#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: points to the bufffer
 * @src: points the string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *pontr = dest;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (pontr);
}
