#include "main.h"
/**
 * print_alphabet_X10 - prints alphabet X10
 */
void print_alphabet_x10(void)
{
	int n = 1;
	char a;

	while (n <= 10)
	{
		for (a = 'a'; a <= 'z'; ++a)
		{
			_putchar(a);
		}
		_putchar(10);
		++n;
	}
}
