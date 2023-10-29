#include <stdio.h>
#include "main.h"
/**
 * main - print a number followed by a new line
 * @argc: args count
 * @argv: arg vector
 * Return: 0, if executed successfully
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

