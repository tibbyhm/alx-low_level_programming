#include <stdio.h>
#include "main.h"

/**
* _strcpy - Copies a string from source to destination
*
* @dest: Where string is copied to
* @src: Where the string is copied from
*
* Return: Pointer to destination
*/

char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
		*dest = '\0';
		return (dest);
	}
}
