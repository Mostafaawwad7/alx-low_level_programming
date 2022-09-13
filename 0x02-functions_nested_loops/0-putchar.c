#include "main.h"

/**
 * main - printing _putchar
 * Return: 0
 */
int main(void)
{
	char *a = "_putchar";

	while (*a)
	{
		_putchar(*a);
		a++;
	}
	_putchar('\n');
	return (0);
}

