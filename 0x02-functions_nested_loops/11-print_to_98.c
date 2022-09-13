#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: to be computed
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;
	int j;

	if(n < 98)
	{
		for (i = n ; i <= 97 ; i++)
		{
		printf("%d, ",i);
		}
	printf("98");
	}
	else if (n > 98)
	{
		for (j = n ; j >= 99 ; j--)
		{
		printf("%d, ",j);
		}
	printf("98");
	}
	else
	{
		printf("98 ");
	}
    
}
