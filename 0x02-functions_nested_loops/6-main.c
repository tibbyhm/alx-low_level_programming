#include <stdio.h>
#include "main.h"
/**
* main - checks the code
*
* Return: 0
*/

int main(void)
{	
	int s;
	s = _abs(-1);
	printf("%d\n", s);
	s = _abs(60);
	printf("%d\n", s);
	s = _abs(0);
	printf("%d\n", s);
	return (0);
}
