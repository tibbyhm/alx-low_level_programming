#include "main.h"
#include <stdio.h>
/**
* main - A function that prints its name
* @argc: Counts number of arguments including function
*
* @argv: The array of argument lines
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
