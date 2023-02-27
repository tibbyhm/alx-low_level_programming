#include "main.h"

/**
 * swap_int - Swaps two integers
 *
 * @a: First input parameter
 * @b: Second input parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
