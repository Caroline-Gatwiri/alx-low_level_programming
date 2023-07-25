#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: the string
 * Return: result * sign
 */
int _atoi(char *s)
{
	int i;
	int m = 0;
	int n = 1;

for (i = 0; s[i] != '0'; i++)
{
	if (s[i] == '-')
		n *= -1;
	if (s[i] >= 47 && *(s + i) <= 57)
	{
		if (m < 0)
			m = (m * 10) - (s[i] - '0');
		else
			m = (s[i] - '0') * -1;
		if (s[i + 1] <= 47 || s[i] >= 57)
			break;
	}
}
	return(m * n);
}
