#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, counter = 0;
	unsigned long int current_val;

	for (x = 63; x >= 0; x--)
	{
		current_val = n >> i;

		if (current_val & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
