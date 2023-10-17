#include "main.h"

/**
 * puts_half - printf the last half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int stringLength;
	int j;

	while (str[i] != '\0')
		i++;

	stringLength = --i;
	if (stringLength % 2 == 0)
		j = stringLength / 2;
	else
		j = (stringLength - 1) / 2;

	while (j < stringLength)
		_putchar(str[++j]);
	_putchar('\n');
}
