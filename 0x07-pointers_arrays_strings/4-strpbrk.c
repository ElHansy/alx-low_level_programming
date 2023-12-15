#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: input string to be checked
 * @accept: source string to be searched for in s
 * return: pointer of matched byte in s
 */



char *_strpbrk(char *s, char *accept)
{
	char *begining = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = begining;
		s++;
	}
	return (NULL);
}
