#include "main.h"
/*
 * printing _putchar
 * */

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

