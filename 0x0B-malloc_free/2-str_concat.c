#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result if success, null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1 = 0;
	int size_s2 = 0;
	char *result;
	int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_s1 = 0;
	while (s1[size_s1] != '\0')
	{
		size_s1++;
	}
	size_s2 = 0;
	while (s2[size_s2] != '\0')
		size_s2++;
	result = (char *) malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (0);
	}
	for (a = 0; a < size_s1; a++)
	{
		result[a] = s1[a];
	}
	for (a = 0; a < size_s2; a++)
		result[size_s1 + a] = s2[a];
	result[size_s1 + size_s2] = '\0';
	return (result);
}

