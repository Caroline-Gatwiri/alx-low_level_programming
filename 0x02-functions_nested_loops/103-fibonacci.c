#include <stdio.h>
/**
 * main - start of the program
 * Description: The program prints and finds thesum of even valued terms
 *		followed by a new line
 * Return: 0 if successfully executed
 */

int main(void)
{
	int a = 0, b = 1, next_value = 0;
	int sum = 0;

	while (next_value < 4000000)
	{
		next_value = a + b;
		a = b;
		b = next_value;
		if (next_value % 2 == 0)
			sum += next_value;
	}
	printf("%i\n", sum);
	return (0);
}

