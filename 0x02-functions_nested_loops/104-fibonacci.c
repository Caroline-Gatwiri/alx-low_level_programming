#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the first 98 Fibonacci numbers.
 * Return: Always 0
 */
int main(void)
{
	unsigned long long int i, a1 = 1, a2 = 2, sum = 0;

	printf("%llu, %llu", a1, a2);

	for (i = 3; i <= 98; i++)
	{
		sum = a1 + a2;
		printf(", %llu", sum);

		a1 = a2;
		a2 = sum;
	}

	printf("\n");
	return (0);
}
