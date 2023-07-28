#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @s: string
 * Return: s, pointer
 */
char *rot13(char *s)
{
	int m, n;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (s[m] == a[n])
			{
				s[m] = b[n];
				break;
			}
		}
	}
	return (s);
}
