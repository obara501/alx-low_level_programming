#include <stdio.h>
/**
 * main - print size of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	pritnf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a lon long int: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
