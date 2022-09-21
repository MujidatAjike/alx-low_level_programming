#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - function to print reverse
 * @s: character to print reverse string
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
