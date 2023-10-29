#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if argc isnt equal to 1, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int coin_vls[] = {25, 10, 5, 2, 1};
	int coin_nums = sizeof(coin_vls) / sizeof(coin_vls[0]);
	int coins = 0;
	int i;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < coin_nums; i++)
	{
		coins += cents / coin_vls[i];
		cents %= coin_vls[i];
	}
	printf("%d\n", coins);
	return (0);
}

