#include "main.h"

/**
 * rot13 - encodes a string into rot13
 *
 * @s: string to encode
 *
 * Return: address of s
 */

char *rot13(char *s)
{
	int i, j;

	char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a1[j] == s[i])
			{
				s[i] = a2[j];
				break;
			}
		}
	}
	return (s);
}
