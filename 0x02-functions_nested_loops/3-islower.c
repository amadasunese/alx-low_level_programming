#include "main.h"

/**
* checks for lowercase character.
* Returns 1 if c is lowercase
* Return 0 otherwise
*
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
