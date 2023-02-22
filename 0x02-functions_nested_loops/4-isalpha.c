#include "main.h"
/**
* _isalpha - checks if a charater is lowercase or uppercase and returns 1
*
* @c: input parameter that is being checked
*
* Return: 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
