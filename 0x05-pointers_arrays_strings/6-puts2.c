#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints a string'
 * @str: The string that will be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
