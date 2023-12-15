#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 * @s: input string to be checked.
 * @accept: source string to be searched for in s.
 * Return: pointer of matched byte in s.
 */



char *_strpbrk(char *s, char *accept)
{
	char *beggining = accept;

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
		accept = beggining;
		s++;
	}
	return (NULL);
}
