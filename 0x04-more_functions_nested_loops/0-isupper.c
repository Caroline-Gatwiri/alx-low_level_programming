#include <stdio.h>

/**
 * _isupper - checks for uppercase letters
 *
 * @c: characters to be checked
 *
 * Return: result
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
