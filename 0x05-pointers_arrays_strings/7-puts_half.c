#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - function to print half of a string
 * @str: character to print
 */
void puts_half(char *str)
{
	int i;
	int j = 0;

	if (_strlen(str) % 2 != 0)
	{
		j += 1;
	}
	for (i = (_strlen(str) + j) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

