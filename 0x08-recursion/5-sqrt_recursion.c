#include "main.h"
/**
 * _sqrt - Finds squareroot
 *
 * @i: Input number
 * @k: Second input number
 *
 * Return: Squareroot of a number
 */


int _sqrt(int i, int k)
{
	int squareroot;

	squareroot = k * k;

	if (squareroot > i)
		return (-1);

	if (squareroot == i)
		return (k);
	else
		return (_sqrt(i, k + 1));
}

/**
 * _sqrt_recursion - Finds squareroot
 *
 * @n: Input number
 *
 * Return: Squareroot of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
