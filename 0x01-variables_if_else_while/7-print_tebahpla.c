#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alaays return zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
