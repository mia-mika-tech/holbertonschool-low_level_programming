#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * print_putchar
 * Return: Always 0 (Success)
*/

void print_putchar(void)
{
       	char str[] = "_putchar";
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');

}
