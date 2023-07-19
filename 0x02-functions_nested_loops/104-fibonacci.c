#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    unsigned long int prev = 1, curr = 2, next;

    printf("%lu, %lu, ", prev, curr);

    for (i = 2; i < 98; i++)
    {
        next = prev + curr;
        printf("%lu", next);

        if (i != 97)
            printf(", ");
        else
            printf("\n");

        prev = curr;
        curr = next;
    }

    return (0);
}
