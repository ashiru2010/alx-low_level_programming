#include <stdio.h>
/**
 * main - write a program that prints its name, followed by a new line.
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
