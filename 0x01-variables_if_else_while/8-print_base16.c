#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	unsigned char ch = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(ch);
	ch++;
	}
	i = '1';
	for (i = 0; i < 6; i++)
	{
	putchar('0' + ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
