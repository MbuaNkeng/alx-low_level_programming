#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets in lower and CAPITAL case
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int n = 97;
	int n1 = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (n1 < 91)
	{
		putchar(n1);
		n1++;
	}
	putchar('\n');
	return (0);
}
