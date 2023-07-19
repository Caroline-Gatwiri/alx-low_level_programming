#include "main.h"
/**
 * _isalpha - checks for alphabetic order
 *
 * @c: The character to be checked
 *
 * Description: The function checks for an alphabetic character and returns
 *		0 if c is a letter either upper or lower case o, if not
 *
 * Return: 0 if c is letter , lowercase or uppercase and 1 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 122) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
