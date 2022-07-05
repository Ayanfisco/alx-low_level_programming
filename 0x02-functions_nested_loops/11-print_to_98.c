#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: function parameter
 */
void print_to_98(int n)
{
	int upper = 98;

	if (n > upper)
	{
		while (n >= upper)
		{
			if (n != upper)
			{
				_putchar(n + '0');
				_putchar(',');
			}
			else
			{
				_putchar(n + '0');
			}
			n--;
		}
	}
	else
	{
		while (n <= upper)
		{
			if (n != upper)
			{
				_putchar(n + '0');
				_putchar(',');
			}
			else
			{
				_putchar(n + '0');
			}
			n++;
		}
	}
	_putchar(10);
}
