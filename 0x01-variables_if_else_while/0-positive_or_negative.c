#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
int main(void)
{

	int n;

	printf("Please enter your number")
		scanf("%d", n);
	if (n > 0)
	{
		printf("The number is postive!\n");
	}
	else if (n == 0)
	{
		printf("The number is zero\n");
	}
	else if (n < 0)
	{
		printf("The number is negative\n");

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
