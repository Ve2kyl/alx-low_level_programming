#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of elements
 * Return: 0 (success)
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n ; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	putchar(10);
}
