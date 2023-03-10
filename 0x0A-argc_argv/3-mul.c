#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - A function that prints its name
* @argc: Counts number of arguments including function
*
i* @argv: The array of argument lines
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int product;

		product = atoi(argv[1]) * atoi(argv[2]);

		if (argc > 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", product);
		}
	
	return (0);
}
