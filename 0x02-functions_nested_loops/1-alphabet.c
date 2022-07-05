#include "main.h"
/**
 * main - main function
 *
 * Return: end of the program
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}

	_putchar(10);
	return (0);
}
