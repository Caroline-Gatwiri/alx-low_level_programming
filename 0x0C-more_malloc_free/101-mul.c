#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiplies two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Result of the multiplication
 */
int multiply(int num1, int num2)
{
    return num1 * num2;
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Exit status of the program
 */
int main(int argc, char *argv[])
{
    char *num1_str;
    char *num2_str;
    int num1;
    int num2;
    int result;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    num1_str = argv[1];
    num2_str = argv[2];

    // Validate num1_str contains only digits
    for (int i = 0; num1_str[i] != '\0'; i++)
    {
        if (!isdigit(num1_str[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    // Validate num2_str contains only digits
    for (int i = 0; num2_str[i] != '\0'; i++)
    {
        if (!isdigit(num2_str[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    num1 = atoi(num1_str);
    num2 = atoi(num2_str);

    result = multiply(num1, num2);

    printf("%d\n", result);

    return 0;
}

