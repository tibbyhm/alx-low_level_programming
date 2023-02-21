#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints alphabet using _putchar function
*
* Return: 0
*/
void print_alphabet(void)
{
	char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		putchar('\n');
}
