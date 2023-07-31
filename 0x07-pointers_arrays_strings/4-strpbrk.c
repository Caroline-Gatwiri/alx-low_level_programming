#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: String we'll search
 * @accept: string which one of bytes is to be matched
 * Return: pointer that matches one of the bytes or Null
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
