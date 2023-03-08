#include "main.h"

/**
* factorial - Finds the factorial of a number
*
* @n: The factorial of the number to be found
*
* Return: Factorial of a number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
