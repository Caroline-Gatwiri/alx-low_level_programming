#include <stdio.h>
#include "main.h"
/**
 * main - prints all the argument it receives
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0, if executed successfully
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

