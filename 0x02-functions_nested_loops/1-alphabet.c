#include "main.h"
/**
 * print_alphabet - start of the program
 * Return: void if executed successfully
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
