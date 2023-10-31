#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns duplicate of the input string
 * @str: the string to e copied
 * Return: pointer to the duplicates string, 0 otherwise
 */
char *_strdup(char *str)
{
	int size = 0;
	int a = 0;
	char *duplicate;

	if (str == NULL)
		return (0);
	size = 0;
	while (str[size] != '\0')
		size++;
	duplicate = (char *) malloc((size + 1) * sizeof(char));
	if (duplicate == NULL)
		return (0);
	for (a = 0; str[a]; a++)
		duplicate[a] = str[a];
	return (duplicate);
}

