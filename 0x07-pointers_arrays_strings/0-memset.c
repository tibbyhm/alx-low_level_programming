#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: Memory address
*
* @b: The constant byte
*
* @n: Number of bytes
*
* Return: Returns s;
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
