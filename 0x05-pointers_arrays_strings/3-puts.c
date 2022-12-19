#include "main.h"
/**
 * _puts - prints string
 * stdout.
 *
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

