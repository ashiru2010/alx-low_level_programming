#include "main.h"

/**
* flip_bits - this function returns the number of bits you
* would need to flip to get from one number to another.
* @n: first number
* @m: second number
* Return: the number of bytes to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or;
	unsigned int retvalue;

	or = n ^ m;

	retvalue = 0;
	while (or > 0)
	{
		if ((or & 1) != 0)
			retvalue++;
		or = or >> 1;
	}
	return (retvalue);
}
