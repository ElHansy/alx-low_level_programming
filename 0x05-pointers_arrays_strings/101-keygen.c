#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - random pswd generator
 *
 * Return: always 0
 */


int main(void)
{
	int i, m, e, z;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));

	while (z != 2772)
	{
		i = e = z = 0;

		while ((2772 - 122) > z)
		{
			m = rand() % 62;
			p[i] = c[m];
			z += c[m];
			i++;
		}

		while (c[e])
		{
			if (c[e] == (2772 - z))
			{
				p[i] = c[e];
				z += c[e];
				i++;
				break;
			}
			e++;
		}
	}

	p[i] = '\0';
	printf("%s\n", p);

	return (0);
}
