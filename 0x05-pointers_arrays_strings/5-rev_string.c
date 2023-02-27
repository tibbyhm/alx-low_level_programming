#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: The string that will be reverse and then printed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, len;

	char temp;

	len = 0;

	len = strlen(s);
	j = len - 1;

	for (i = 0; i <= (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
