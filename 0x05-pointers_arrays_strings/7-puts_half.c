#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 * @str: The string that will be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int len, i, halflen;

	len = strlen(str);

	if (len % 2 == 0)
	{
		halflen = len / 2;
	}
	else
		halflen = (len - 1) / 2;

	for (i = halflen; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
