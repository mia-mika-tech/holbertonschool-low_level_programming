#include "main.h"

/**
 * print_sign - Affiche le signe d'un nombre
 * @n: Le nombre à vérifier
 *
 * Return: 1 si n est positif, 0 si n est nul, -1 si n est négatif
 */

int print_sign(int n)
{
    if (n > 0)
    { 
        _putchar('+');
        return 1;
    }
    else if (n == 0)
    {
        _putchar('0');
        return 0;
    }
    else
    {
        _putchar('-');
        return -1;
    }
}
