#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: String
 * return: o
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (0 = longi; o > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

