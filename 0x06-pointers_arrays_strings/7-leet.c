#include "main.h"
/**
  * leet - Encodes a string into 1337
  *
  * @z: The string to encode
  *
  * Return: The encoded string
  */

char *leet(char *z)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (z[a])
	{
		b = 0;

		while (b < l)
		{
			if (z[a] == r[b] || z[a] - 32 == r[b])
			{
				z[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (z);
}
