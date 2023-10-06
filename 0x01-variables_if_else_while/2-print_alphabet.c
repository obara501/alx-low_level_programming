#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet from a to z in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
