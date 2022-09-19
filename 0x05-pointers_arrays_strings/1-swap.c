#include "main.h"

/**
 * swap_int - swaps two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: return none.
 */
void swap_int(int *a, int *b)
{
	int sw = *a;
	*a = *b;
	*b = sw;
}
