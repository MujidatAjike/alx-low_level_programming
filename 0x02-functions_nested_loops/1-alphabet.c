#include "main.h"
/**
 * print_alphabet - Check description
 *
 * description: print alphabetvin lower case
 *
 * Return: always return zero
 */
vioid print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
