#include <stdio.h>
#include "main.h"
/**
* main - prints using _putchar function
*
* Return: 0
*/
int main(void)
{
	char *ch = "_putchar";
	int i;
		for (i = 0; i <= 20; i++)
		{
			if (ch[i] == '\0')
			{
			_putchar('\n');
			break;
			}
			else
			_putchar(ch[i]);
		}

	return (0);
}
