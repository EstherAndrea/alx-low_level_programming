#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned randoms
 * Return: 0
 */

int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, b);
	}
	else if (b < 6 && b != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, b);
	}
	return (0);
}
