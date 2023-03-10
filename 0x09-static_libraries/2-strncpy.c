
#include "main.h"

#include <stddef.h>

/**
* _strncpy - Copies one string to another
* @dest: Where string will be copied to
*
* @src: Where copied string comes from
*
* @n: The limitation of number of chars to copy
*
* Return: pointer to char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
