#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Please enter your number");
	scanf("%d", n);
	if (n > 0)
	{
		print("The number is postive!\n", n);
	}
	else if (n == 0)
	{
		printf("The number is zero\n", n);
	}
	else if (n < 0)
	{
		printf("The number is zero\n", n);
	}
											                                                 
	return (0);
}
