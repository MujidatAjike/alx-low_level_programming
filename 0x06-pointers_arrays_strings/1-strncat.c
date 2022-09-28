#include "main.h"
/**
 * _strncat -  a function that concatenate two string
 *
 * @dest: destination of concat
 * @src: sorce array to concat
 * @n: amount of times to append
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
