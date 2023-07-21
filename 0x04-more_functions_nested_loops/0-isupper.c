#include "main.h"
/**
 * _isupper - checks if a letter is uppercase or not.
 * @c: The number to be checked
 * Return: ! for uppercase and  0 for anything else.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
