#include "main.h"
/**
 * puts2 - print one char out of 2
 * @str: input string
 * Return: no return
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
