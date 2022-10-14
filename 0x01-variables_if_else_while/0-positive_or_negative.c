#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Entry point
 *
 * returns- returns 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("The %d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("The %d is negative\n", n);
	}
	return (0);
}
