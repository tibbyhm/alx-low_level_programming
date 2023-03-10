
#include "main.h"

/**
 * _isdigit - checks for input parameter is a digit.
 *
 * @c: Input parameter that is being checked
 *
 * Return: 1 if uppercase
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
