#include "main.h"
/**
 * main - Entry point
 * Description: function to prit letters of the alphabet in small letters
 * Return: Aways 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
