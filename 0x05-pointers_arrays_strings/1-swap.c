#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 * @a: variable one for swap
 * @b: variable two for swap
 * *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
