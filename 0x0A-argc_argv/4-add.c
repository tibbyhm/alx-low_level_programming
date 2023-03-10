#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - A function that prints its name
* @argc: Counts number of arguments including function
*
i* @argv: The array of argument lines
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int add = 0, i;

	if (argc == 1)
	{
		printf("0\n");
	}
			
		for (i = 1; i < argc; i++)
		{
			add = add + atoi(argv[i]);
		}
			printf("%d\n", add);

	return (0);
}
