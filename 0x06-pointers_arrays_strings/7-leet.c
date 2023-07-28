#include "main.h"
/**
 * leet - encodes string
 * @str: string to be encoded
 * Return: pointer
 */
char *leet(char *str)
{
	int a, b;

	char encode[] = "aAeEoOtTlL";
	char decode[] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (encode[b] == str[a])
				str[a] = decode[b];
		}
	}
	return (str);
}
