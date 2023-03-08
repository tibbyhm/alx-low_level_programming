#include "main.h"

/**
* _puts_recursion - Implements puts function recursively
*
* @s: The string to be printed
*
* Return: Void
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
}
