#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dlen = 0, i;

    /* Calculate the length of the destination string */
    while (dest[dlen])
    {
        dlen++;
    }

    /* Concatenate the source string to the destination string */
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dlen] = src[i];
        dlen++;
    }

    /* Add a null terminator to the concatenated string */
    dest[dlen] = '\0';

    return dest;
}
