#include "main.h"

int main (void)
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

