#include <stdio.h>
#include <ctype.h>
/**
* string_toupper - Converts a string to uppercase
* @arr: The string that will be converttes to uppercase
*
* Return: Pointer to char
*/

char *string_toupper(char *arr)
{
	int i;

	for (i = 0; arr[i]; i++)
	{
		arr[i] = (char)toupper(arr[i]);
	}
	return (arr);
}
