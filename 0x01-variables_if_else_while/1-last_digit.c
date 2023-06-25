#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last number > 5)
	{
		printf("The last number is %d and is greater than 5\n", last number);
	}
	else if (last number == 0)
	{
		printf("The last number is %d and is 0\n", last number);
	}
	else
	{
		printf("The last number is %d and is less than 6 and not 0\n", last number);
	}
	return (0);
}
