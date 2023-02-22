#include "main.h"
/**
* print_last_digit - prints last digit of a number
*
* @n: input parameter that is being checked
*
* Return: 0
*/

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -1 * lastDigit;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
