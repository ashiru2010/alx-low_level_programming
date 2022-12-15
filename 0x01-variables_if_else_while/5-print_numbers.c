#include <stdio.h>
/**
 * main - printing all single digitt number in base
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '10'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

