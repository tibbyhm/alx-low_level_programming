#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - If else
*
* Return: Returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}

	if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}

	if (n < 0)
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	return (0);
}
