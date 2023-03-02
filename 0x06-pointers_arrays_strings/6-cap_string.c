#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* cap_string - Converts each first letter to uppercase
* @arr: Contains string to change to uppercase
*
* Return: Char to pointer
*/
char *cap_string(char *arr)
{
	int convert = 32, i, icount;

	char characters[] = {' ', ',', ';', '.', '!',
			'?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};

	for (i = 0; arr[i]; i++)
	{
		if (arr[i] >= 'i' && arr[i] <= 'z')
		{
			arr[i] =  arr[i] - convert;
		}
		convert = 0;
		for (icount = 0; characters[icount]; icount++)
		{
			if (characters[icount] == arr[i])
			{
				convert = 32;
				break;
			}
		}
	}
	return (arr);
}

