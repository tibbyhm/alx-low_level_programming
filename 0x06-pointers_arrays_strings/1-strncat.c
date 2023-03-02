#include <stdio.h>
#include <string.h>

/**
* _strncat - Concatenates one string to another
*
* @dest: String that will have another string added to it
*
* @src: The string that will add to another string
*
* @n: Thw number of src string that will be added to dest
*
* Return: Pointer to char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n--)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
