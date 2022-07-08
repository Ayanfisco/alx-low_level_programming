#include <stdio.h>
#include <math.h>
/**
 * main - a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	long int number = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(number); prime++)
	{
		if (number % prime == 0)
		{
			number = number / prime;
			prime--;
		}
	}
	printf("%d\n", prime);
	return (0);
}
