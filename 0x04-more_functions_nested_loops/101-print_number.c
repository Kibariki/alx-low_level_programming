#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	/* Handle the case for negative numbers */
	if (n < 0)
	{
		_putchar('-');
		/* Convert the negative number to positive for printing */
		n = -n;
	}

	/* Handle the case for single-digit numbers */
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}

	/* Recursively call the function for the remaining digits */
	print_number(n / 10);
	_putchar((n % 10) + '0');
}
