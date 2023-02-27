#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  print_array - Prints elements of array
 *
 * @a: The string that will be printed
 * @n: Number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
