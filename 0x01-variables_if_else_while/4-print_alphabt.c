#include <stdio.h>

/**
   * main - print alphabet in upper and lower
   *
   * Return: zero
   */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{	if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
