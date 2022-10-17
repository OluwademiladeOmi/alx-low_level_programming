#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always returns 0 if no error
 */

int main(void)
{
	char i;

		for (i = 'z'; i >= 'a'; i--)
			putchar(i);
		putchar('\n');
		return (0);
}
