#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string to be appended
 * @src: string to be completed
 * @n: integer parameter
 *
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x++])
	{
		y++;
	}
	for (x = 0; src[x] && x < n; x++)
	{
		dest[y++] = src[x];
	}
	return (dest);
}
