#include <stdio.h>

/**
   * main - print alphabet in lowercase
   *
   *Return: zero
   */
int main(void)
{
	int i = 0;
	char alphabet[26];
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
    {
        alphabet[i] = ch;
        i++;
    }
    for (int j = sizeof(alphabet) ; j >= 0; j--)
    {
        printf("%c",alphabet[j]);
    }

	putchar('\n');
	return (0);
}
