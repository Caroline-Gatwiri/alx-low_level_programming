#include <stdio.h>
#include "main.h"
/**
 * main - prints its name folllowed by a new line
 * @argc: count arg
 * @argv: vector arg
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

