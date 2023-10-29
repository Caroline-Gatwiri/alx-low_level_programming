#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints sum
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0,or 1 if is not an int
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

