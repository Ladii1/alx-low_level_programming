#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= '2'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= '2'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
