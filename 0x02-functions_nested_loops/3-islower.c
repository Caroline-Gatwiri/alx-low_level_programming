#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The character for checking the case
 * Description: The function checks for lowercase characters and returns
 * one iflowercase and zero if not
 *
 * Return: 1 if lowercase 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
