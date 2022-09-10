#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry
 *
 * Return: alwaus return zero
 */
int main(void)
{
	int n;
	int lastdigit

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of n is %d and is greater than %d\n", n, lastdigit)
	};
	else if (lastdigit == 0)
	{
		printf("Last digit of n is %d and is 0\n", n, lastdigit);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0", n, lastdigit);
	}
	return (0);
}
