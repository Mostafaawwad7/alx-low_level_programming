#include "main.h"

/**
 * _islower - checks for lowercase or uppercase characters.
 *
 * @c: parameter
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
