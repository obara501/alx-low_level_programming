#include <stdio.h>

/**
 * main- entry point
 *
 * Description: Prints heaxdecimal numbers
 * Return: 0 (success)
 */
int main(void)
{
	char hexNumber = '0';

	while (hexNumber <= '9')
	{
		putchar(hexNumber);
		hexNumber++;
	}

	hexNumber = 'a';

	while (hexNumber <= 'f')
	{
		putchar(hexNumber);
		hexNumber++;
	}
	putchar(10);
	return (0);
}
