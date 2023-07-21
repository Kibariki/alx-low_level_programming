#include <stdio.h>
#include <math.h>

/* Function prototype for largest prime factor */
long largest_prime_factor(long n);

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 * Return: The largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long largest_factor = -1;
	long i;

	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	if (n > 2)
		largest_factor = n;

	return (largest_factor);
}

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 600851475143;
	long result = largest_prime_factor(number);

	printf("The largest prime factor of %ld is %ld\n", number, result);

	return (0);
}
