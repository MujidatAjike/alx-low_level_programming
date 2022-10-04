#include "main.h"
/**
 * _strncpy - a function that copy a string
 *
 * @dest: destination to copy
 * @src: source to copy from
 * @n: number of times to copy
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}