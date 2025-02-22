#include "main.h"

/**
 * main - Entry point
 *
 * print_putchar - Prints the string "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *ch = "_putchar\n";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	return (0);
}
