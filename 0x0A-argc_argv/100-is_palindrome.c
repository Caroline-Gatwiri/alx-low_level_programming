#include "main.h"
#include <string.h>

int is_palindrome(char *s)
{
    int length = strlen(s);
    int i;

    // If the string is empty or has only one character, it's a palindrome
    if (length <= 1)
        return 1;

    for (i = 0; i < length / 2; i++) {
        // Compare the characters from the beginning and end of the string
        if (s[i] != s[length - 1 - i]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // It's a palindrome
}

