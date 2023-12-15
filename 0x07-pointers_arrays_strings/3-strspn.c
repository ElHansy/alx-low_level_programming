#include "main.h"

/**
 * _strspn - Get the length of initial matched prefix
 * @s: string to be scanned
 * @accept:string containing the characters to match
 * Return:Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;
	int i,j;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (!match)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
