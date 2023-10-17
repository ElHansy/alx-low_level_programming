#include "main.h"

/**
 * _atoi - converts a string to integer
 *@s: string to be convert
 * Return: integers in a string
 */

int _atoi(char *s)
{
	int num, len, num_count, mult, x, neg;

	len = 0;
	x = 0;
	num_count = 0;
	mult = 1;
	neg = 1;
	num = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			num_count++;
			if (!(s[len + 1] >= '0' && s[len + 1] <= '9'))
				break;
		}
		len++;
	}

	for (; num_count > 1; num_count--)
	{
		mult *= 10;
	}

	for (; x <= len; x++)
	{
		if (s[x] == '-')
			neg *= -1;
		else if (s[x] <= '9' && s[x] >= '0')
		{
			num += (s[x] - '0') * mult * neg;
			mult /= 10;
		}
	}

	return (num);
}
