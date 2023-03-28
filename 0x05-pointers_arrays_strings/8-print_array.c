#include "main.h"
#include <stdio.h>

/**
 * print_ray - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the arrays to be printed
 * return: void
 */

void print_array(int *a, int n)
{

	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(",");
	}
	}
	printf("\n");
}
