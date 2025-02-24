#include "main.h"

/**
 * times_table - Imprime la table des 9 fois, en commençant par 0.
 */

void times_table(void)
{

    	int i, j, result;

    for (i = '0'; i <= '9'; i++)
    {

        for (j = '0'; j <= '9'; j++)
        {
            result = 'i' * 'j';

            if (j == '0')
            {
                _putchar('0' + result);
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                if (result < '10')
                {
                    _putchar(' ');
                }
                _putchar('0' + (result / 10));
                _putchar('0' + (result % 10));
            }
        }

        _putchar('\n');
    }
}
