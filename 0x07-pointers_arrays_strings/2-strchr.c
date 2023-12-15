#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  * Return: the string from character found
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
