#include "main.h"
/**
 * print_alphabet - function to print a-z
 *
 * Return: 0
 */

char print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
