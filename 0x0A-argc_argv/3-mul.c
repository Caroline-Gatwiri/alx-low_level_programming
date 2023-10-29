#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts no of arguments
 * @argv: array of arguments
 * Return: 0,if two arguments are passed, 1, otherwise
 */
int main(int argc, char *argv[])
{
	int a = 1;
	int b = 2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[a]) * atoi(argv[b]));
	return (0);
}

