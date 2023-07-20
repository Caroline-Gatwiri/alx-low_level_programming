#include <stdio.h>
/**
 * main - looks for and prints largest prime factors
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143, divisor = 4;

	while (divisor < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (divisor = 3; divisor < (num / 2); divisor += 2)
		{
			if ((num % divisor) == 0)
				num /= divisor;
		}

	}
	printf("%ld\n", num);
	return (0);
}

