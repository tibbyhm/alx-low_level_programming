#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string that will be reverse and then printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
