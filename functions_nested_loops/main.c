#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char str[] = "_putchar";
    int n = 0;

    while (str[n] != '\0')
    {
        _putchar(str[n]);
        n++;
    }
    _putchar('\n');

    return (0);
}
