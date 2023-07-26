#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	/* Calculate the length of the source string */
	while (src[index])
	{
		src_len++;
		index++;
	}

	/* Copy up to n bytes from the source string to the destination */
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	/* If n is greater than the source length, add null terminators */
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
