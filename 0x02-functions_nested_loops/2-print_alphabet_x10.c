#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * description: print lower case alphabetg 10 times
 * Return: always return zero
 */
void print_alphabet_x10(void)
{
	int q;
	int s;

	for (s = 0; s <= 9; s++)
	{
	for (q = 'a'; q = 'z'; q++)
	{
		 _putchar(q);
	}
	_putchar('\n');
	}
	return (0);
}
