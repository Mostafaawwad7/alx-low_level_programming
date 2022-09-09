#include <stdio.h>

/**
   * main - print alphabet in lowercase and uppercase
   *
   *Return: zero
   */
int main(void)
{
	char ch;
	
	char ch2;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for ( ch2 = 'A' ; ch2 <= 'Z' ; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
