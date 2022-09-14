#include "main.h"
/**
 * main - entry point
 *
 * Return: always return zero
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');;
}
