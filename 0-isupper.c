#include "main.h"
/**
 * _isupper - main function
 * @c : value to compare
 * Return: 1 if true , zero if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
