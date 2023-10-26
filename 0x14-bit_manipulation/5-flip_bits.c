#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int current_val;
	unsigned long int y = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current_val = y >> i;
		if (current_val & 1)
			counter++;
	}

	return (count);
}
