#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print alphabets in lower case
 * and upper case but exclude q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		if (letter == 101 || letter == 113)
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
