#include "main.h"
/**
 * _strlen - length of the string
 * @s: the string whose legth is being checked
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	unsigned int str_len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		str_len += sizeof(char);
	return (str_len);
}
