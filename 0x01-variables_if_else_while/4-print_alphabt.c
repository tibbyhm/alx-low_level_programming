
#include <stdio.h>

/**
* main - For loop
*
* Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 97; i <= 102; i++)
	{
		if (i != 101 || i != 113)
		{
		putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
