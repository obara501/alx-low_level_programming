#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print songe digit numbers
 * from 1 to 10
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number++);
	}
	printf("\n");

	return (0);
}
