#include "math.h"

/**
 * _isalpha - Checks if a charcter is alphabetic [a-zA-Z]
 * @c: An integer representing an alphabetic character
 *
 * Description: Checks if a character is lowercase or uppercase alphabetic
 * Return: 1 if alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
