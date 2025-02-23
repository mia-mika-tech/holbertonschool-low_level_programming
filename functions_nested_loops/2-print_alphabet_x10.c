#include "main.h"

/**
 * print_alphabet_x10 - Displays the alphabet in lowercase.
 *
 * Description: This function scrolls through the letters from 'a' to 'z'
 * and displays them one by one using the `_putchar` function.
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	}
}
