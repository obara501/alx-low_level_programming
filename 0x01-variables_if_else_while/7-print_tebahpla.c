#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alpahebst in reverse
 * with a lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar(10);
	return (0);
}
