#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string toperform the reversal
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
