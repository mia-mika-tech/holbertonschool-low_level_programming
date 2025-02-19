#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	char ch;

	for (n = '0'; n <= '9'; n++)
	{
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(n);
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
