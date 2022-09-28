/*
 * 3-factorial.c
 * Auth: sam
 */

#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to be used
 *
 * Return: the factorialof the number
 *         If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
	int next factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}

