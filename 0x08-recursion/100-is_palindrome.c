#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if `s` is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
    size_t len = strlen(s);

    if (len <= 1)
        return 1;

    if (s[0] != s[len - 1])
        return 0;

    s[len - 1] = '\0';

    return is_palindrome(s + 1);
}

