#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 * @r: intrger ti retirn last digit
 * Return: always return last digit number
 */
int print_last_digit(int r)
{
	_putchar('0' + _abs(r % 10));
	return (_abs(r % 10));
}
