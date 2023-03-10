
#include "main.h"
#include <stdio.h>

/**
* _islower  - Returns 1 if c is lowercase and 0 if its not
* @c: input parameter for _islower
*
* Return: 1
*/

int _islower(int c)
{
		if (c >= 97 && c <= 122)
			return (1);
		else
			return (0);

}
