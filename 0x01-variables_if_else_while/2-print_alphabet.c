#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets in lower case
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
