#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * positive_or_negative - is the entry point for program (initializing)
 *
 * @i: the number being checked
 *
 * Return: zero , program has been terminated successfully
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
