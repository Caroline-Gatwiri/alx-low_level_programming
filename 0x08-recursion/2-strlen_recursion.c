#include "main.h"
/**
 * _strlen_recursion - returns lenth of a strung
 * @s: string whose length is returned
 * Return: 0 or len of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
