#include <stdio.h>

/**
* _strcat - Concatenates one string to another
* @dest: String that will have another string added to it
* @src: The string that will add to another string
* Return: Pointer to char
*/

char *_strcat(char *dest, char *src)
{
	size_t i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
