#include <stdio.h>
/**
 * main - start of the program
 * Description: The program that finds and prints the first
 *98 Fibonacci numbers, from 1 and 2 then new line
 *
 * Return: o if successful
 */
int main(void)
{
	long int i, a1 = 1, a2 = 2, sum = 0;

	for (i = 1; i <= 98; i++)
	{
		printf("%ld, ", a1);
		sum = a1 + a2;
		a1 = a2;
		a2 = sum;
		if (i == 97)
		{
			printf("%ld\n", a1);
		}
	}
	return (0);
}

