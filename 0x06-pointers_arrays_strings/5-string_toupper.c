#include "main.h"

/**
  * string_toupper - Changes all lowercase to uppercase
  *
  * @p: String to return
  *
  * Return: String
  */

char *string_toupper(char *p)
{
	int s;

	for (s = 0; p[s] != '\0'; s++)
	{
		if (p[s] >= 97 && p[s] <= 122)
		{
			p[s] = p[s] - 32;
		}
	}
	return (p);
}
