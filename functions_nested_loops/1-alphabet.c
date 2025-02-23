#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - Displays the alphabet in lower case
 * Description: This function scrolls through the letters from 'a' to 'z' and displays them.
 *              one by one using the `_putchar` function.
 *
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
