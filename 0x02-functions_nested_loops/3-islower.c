#include "main.h"

/**
 * _islower - Checks if a charcter is lowercase or uppercase.
 * @c: An integer representing an alphabetic characte
 *
 * Description: Checks if a character is lowercase or uppercas
 * Return: 1 if lowercase, else 0 if not lowercase.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
