#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
