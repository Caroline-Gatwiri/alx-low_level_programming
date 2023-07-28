#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: s, pointer
 */
char *cap_string(char *s)
{
	int a = 0;
	int b = 1;

	for (; s[a] != '\0'; a++)
	{
		if (
				s[a] == 32  || s[a] == 9  || s[a] == 10  ||
				s[a] == 44  || s[a] == 59  || s[a] == 46  ||
				s[a] == 33  || s[a] == 63  || s[a] == '*'  ||
				s[a] == 40  || s[a] == 41  ||
				s[a] == 123  || s[a] == 125
				)
		{
			b = 1;
		}
		else if (b)
		{
			if (s[a] >= 'a' && s[a] <= 'z')
			{
				s[a] = s[a] - 'a' + 'A';
			}
			b = 0;
		}
	}
	return (s);
}
