#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a;
	int size = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		size++;

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);

	size = 0;

	for (a = 0; s1[a]; a++)
		str[size++] = s1[a];

	for (a = 0; s2[a] && a < n; a++)
		str[size++] = s2[a];

	str[size] = '\0';
	return (str);

}

