
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
		int i = 0;

		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);

}
