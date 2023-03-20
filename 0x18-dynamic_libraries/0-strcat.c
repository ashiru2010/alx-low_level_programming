#include "main.h"
/**
 * _strcat - concatenating two strings
 * @dest: string that will be appended
 * @src: string to be concatenated
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x++])
	{
		y++;
	}
	for (x = 0; src[x]; x++)
	{
		dest[y++] = src[x];
	}
	return (dest);
}
