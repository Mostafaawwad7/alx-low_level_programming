<<<<<<< HEAD
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
=======
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
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
>>>>>>> fc5c65b8dcedaeff6bf69f6f3661b7bc4f7a9019
