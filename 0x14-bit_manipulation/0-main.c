#include "main.h"

/**
* main - Entry of application
*
* Return: Always 0 if success, otherwise error
*/
int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}
