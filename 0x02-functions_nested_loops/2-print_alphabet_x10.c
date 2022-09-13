#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
        int i;
        int j;

        for(j = 0; j <= 9 ; j++)
        {
                for (i = 'a'; i <= 'z'; i++)
                {
                        _putchar(i);
                }
        _putchar('\n');
        }
}

