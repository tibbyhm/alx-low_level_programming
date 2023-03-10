
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: Input parameter that is being checked
 *
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
