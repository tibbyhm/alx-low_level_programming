#include <stdio.h>

/**
* reverse_array - Reverses contents of array
* @a: Content of array elements
*
* @n: Number of elemets
*
* Return: Void
*/

void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] != '\0')
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);

	}
	printf("\n");
}
