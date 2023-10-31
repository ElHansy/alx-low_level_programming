#include "main.h"


/**
 * _atoi - converts a string to integer
 *
 *@s: string to be convert
 *
 * Return: integers in a string
 */


int _atoi(char *s)
{
	int nm, ln, nm_count, mlt, x, neg;

	ln = 0;
	x = 0;
	nm_count = 0;
	mlt = 1;
	neg = 1;
	nm = 0;

	while (s[ln] != '\0')
	{
		if (s[ln] >= '0' && s[ln] <= '9')
		{
			nm_count++;
			if (!(s[ln + 1] >= '0' && s[ln + 1] <= '9'))
				break;
		}
		ln++;
	}

	for (; nm_count > 1; nm_count--)
	{
		mlt *= 10;
	}

	for (; x <= ln; x++)
	{
		if (s[x] == '-')
			neg *= -1;
		else if (s[x] <= '9' && s[x] >= '0')
		{
			nm += (s[x] - '0') * mlt * neg;
			mlt /= 10;
		}
	}

	return (nm);
}
