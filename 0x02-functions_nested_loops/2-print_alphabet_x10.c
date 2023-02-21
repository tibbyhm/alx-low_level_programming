#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10  - Prints the alphabet ten times
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	int i;
	char ch;
		for (i = 0; i <= 9; i++)
		{
			for (ch = 'a'; ch <= 'z'; ch++)
			{
				_putchar(ch);
			}
		_putchar('\n');
		}
}
