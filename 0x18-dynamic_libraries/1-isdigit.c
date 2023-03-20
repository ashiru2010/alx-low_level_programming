#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: int to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
