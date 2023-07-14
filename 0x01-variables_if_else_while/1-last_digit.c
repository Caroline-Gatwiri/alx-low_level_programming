#include <stdlib.h>
#include <time.h>

/* more headers goes there */

#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main - start of the code
*
* Return: if successful returns zero
*/
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNum = n % 10;

	printf("Last digit of %d is %d ", n, lastNum);
	if (lastNum > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastNum == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
