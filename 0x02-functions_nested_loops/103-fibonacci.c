#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev = 1, curr = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = prev + curr;
		if (next % 2 == 0)
		{
			sum += next;
		}
		prev = curr;
		curr = next;
	}

	printf("%lu\n", sum);

	return (0);
}
