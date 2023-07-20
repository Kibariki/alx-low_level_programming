/* main.h (header file) */

#ifndef MAIN_H
#define MAIN_H

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of multiplication of a and b.
 */
int mul(int a, int b);

#endif /* MAIN_H */


/* 2-mul.c (source file) */

#include "main.h"

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of multiplication of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}
