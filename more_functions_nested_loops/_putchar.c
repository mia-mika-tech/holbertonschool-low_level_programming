#include <unistd.h>

/**
 * _putchar - ~Writes a character to standard output (stdout)
 * @c: The character | write
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
