#include "main.h"

/**
 * _islower - function to check for lowercase character
 *
 * c is the argument of the function "int c"
 *
 * Return: 1 if char is lower, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z') {
		return (1);
	}

	else {
		return (0);
	}
}
