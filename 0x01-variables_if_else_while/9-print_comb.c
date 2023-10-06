#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single digit numbers
 * separated by comas
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number == 57)
		{
			break;
		}
		putchar(44);
		putchar(32);
		number++;
	}
	putchar(10);

	return (0);
}
