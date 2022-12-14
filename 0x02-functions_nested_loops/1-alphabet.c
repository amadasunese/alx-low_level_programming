#include "main.h"

/**
** Print the alphabet in lowercase.
*
* Description: A function that prints the alphabet, in lowercase, followed by a new line.
*
* Return: void.
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
