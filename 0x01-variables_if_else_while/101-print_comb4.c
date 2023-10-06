#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all combinations of 3 digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int num = 48;
	int nextNum;
	int nextNextNum;

	for (; num <= 57; num++)
	{
		nextNum = num + 1;
		for (; nextNum <= 57; nextNum++)
		{
			nextNextNum = nextNum + 1;
			for (; nextNextNum <= 57; nextNextNum++)
			{
				putchar(num);
				putchar(nextNum);
				putchar(nextNextNum);
				if (num == 55 && nextNum == 56 && nextNextNum == 57)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
