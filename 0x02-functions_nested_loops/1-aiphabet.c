#include "main.h"
/**
 * main - main program or function
 *
 * Return: end program
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	
	_putchar(10);
	return (0);
}
