#include "main.h"

/**
 * _strncat - Concatenates two strings using the most
 * an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	/* Calculate the length of the destination string */
	while (dest[index])
	{
		dest_len++;
		index++;
	}

	/* Concatenate up to n bytes from the source string */
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len] = src[index];
		dest_len++;
	}

	/* Add null terminator to the concatenated string */
	dest[dest_len] = '\0';

	return (dest);
}
