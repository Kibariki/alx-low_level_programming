/*main.h (header file) */

#ifndef MAIN_H
#define MAIN_H

/**
 *_isupper - Checks if a character is uppercase.
 *@c: The character to be checked.
 *
 *Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c);

#endif /* MAIN_H */


/*0-isupper.c (source file) */

#include "main.h"

/**
 *_isupper - Checks if a character is uppercase.
 *@c: The character to be checked.
 *
 *Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
