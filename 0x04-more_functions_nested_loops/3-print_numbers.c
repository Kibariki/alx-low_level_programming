/* main.h (header file) */

#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _putchar */
int _putchar(char c);

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void);

#endif /* MAIN_H */


/* 3-print_numbers.c (source file) */

#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
