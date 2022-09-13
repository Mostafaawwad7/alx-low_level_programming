#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: to be computed
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if(n < 98)
	{
		for (int i = n ; i <= 97 ; i++)
		{
		printf("%d, ",i);
		}
	printf("98");
	}
	else if (n > 98)
	{
		for (int i = n ; i >= 99 ; i--)
		{
		printf("%d, ",i);
		}
	printf("98");
	}
	else
	{
		printf("98");
	}
    return(0);
}
