#include <stdio.h>
#include "main.h"
/**
* main - checks the code
*
* Return: 0
*/

int main(void)
{	
	int s;

	print_last_digit(98);
	print_last_digit(0);
	s = print_last_digit(-1024);
	_putchar('0' + s );
	_putchar('\n');
	return (0);
}
