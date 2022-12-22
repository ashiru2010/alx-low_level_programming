#include "main.h"
/**
 * leet - encodes a string
 * @str: parameter
 *
 * Return: returns
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 8; index2++)
		{
			if (str[index1] == leet[index2] ||
			str[index1] - 32 == leet[index2])
			{
				str[index1] = index2 + '0';
				break;
			}
		}
	}
	return (str);
}
