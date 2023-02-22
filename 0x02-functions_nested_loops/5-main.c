#include "main.h"
/**
* main - checks the code
*
* Return: 0
*/

int main(void)
{	
	int s;

	s = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(s + '0');
	_putchar('\n');
	s = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(s + '0');
	_putchar('\n');
	s = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(s + '0');
	_putchar('\n');
	return (0);
}
