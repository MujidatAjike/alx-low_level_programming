#include "main.h"
/**
 * largest_number - main function
 * @a: first integer
 * @b: second interger
 * @c: third integer
 * Return: 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}
	return (largest);
}

