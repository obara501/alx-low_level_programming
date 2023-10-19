#include "main.h"

/**
 * reverse_array - reverses an array.
 * @a: The array to reverse.
 * @n: The size of the array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
