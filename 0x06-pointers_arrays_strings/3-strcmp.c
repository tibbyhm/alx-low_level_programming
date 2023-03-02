#include "main.h"

/**
* _strcmp - This function compares two strings
*
* @s1: The first string
*
* @s2: The second string
*
* Return: Int
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s2[i] > s1[i])
			return (-1);
	i++;
	}
	return (0);
}
