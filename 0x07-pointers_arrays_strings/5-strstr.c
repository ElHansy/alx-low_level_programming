#include "main.h"

/**
 * _strstr - function finds the first occurrence of the 
 * substring needle in the string haystack
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: return substring matched
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr1, *ptr2;

	while (*haystack != '\0')
	{
		ptr1 = haystack;
		ptr2 = needle;

		while (*haystack != '\0' && *ptr2 != '\0' && *haystack == *ptr2)
		{
			haystack++;
			ptr2++;
		}

		if (*ptr2 == '\0')
			return (ptr1);
		haystack = ptr1 + 1;
	}
	return (0);
}
