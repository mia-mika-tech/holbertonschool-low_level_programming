#include "main.h"

/**
 * main - check the code
 * print_alphabet - Displays the alphabet in lower case
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
