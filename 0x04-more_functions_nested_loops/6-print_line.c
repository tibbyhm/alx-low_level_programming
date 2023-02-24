#include "main.h"

/**
* print_line - Prints _ n times
* @n: Input parameter
*
* Return: Void
*/

void print_line(int n)
{
	int i;


		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 0; i <= n - 1; i++)
			{
				_putchar('_');
			}
		_putchar('\n');
		}
}

