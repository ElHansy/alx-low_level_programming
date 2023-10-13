#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
	return (0);

}
