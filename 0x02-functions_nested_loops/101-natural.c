#include <stdio.h>
/**
 * main - start of the code
 *
 * Description: Prints multiples of 3 and 5 below 1024
 *
 * Return: 0 if executed successfully
 */
int main(void)
	{
	int i;
	int total_sum;

	total_sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total_sum = total_sum + i;
		}
	}
	printf("%d\n", total_sum);
	return (0);
}
