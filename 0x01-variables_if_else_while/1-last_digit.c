#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Description: test last value of n
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n, digit)
	else if (digit == 0)
		printf("Last digit of %i is %d and is 0\n", n, digit)
	else if (digit < 6 && != 0)
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, digit)

	return (0);
}
