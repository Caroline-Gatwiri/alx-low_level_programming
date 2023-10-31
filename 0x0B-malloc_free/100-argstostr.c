#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, n = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			n++;
	}
	str = malloc(n + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];
		str[i++] = '\n';
	}
	str[n] = '\0';

	return (str);
}

