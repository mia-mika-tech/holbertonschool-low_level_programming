#include "main.h"

/**
 * print_alphabet - Displays the alphabet in lowercase.
 *
 * Description: This function scrolls through the letters from 'a' to 'z'
  and displays them one by one using the `_putchar` function.
 *
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
