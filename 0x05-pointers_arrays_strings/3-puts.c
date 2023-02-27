#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string'
 * @str: The string that will be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
