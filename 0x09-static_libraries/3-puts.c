
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
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
