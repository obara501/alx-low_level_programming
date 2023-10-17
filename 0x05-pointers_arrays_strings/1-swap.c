#include "main.h"

/**
 * swap_int -swaps two integers using pointers.
 * @a: address of the first integer.
 * @b: address of the second integer.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
