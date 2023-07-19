#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main- prints _putchar followed by newline.
 * Return: 0 i.e null after successful completion.
 */
int main(void)
{
	int i;
	char a[] = "_putchar";

	i = 0;

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
