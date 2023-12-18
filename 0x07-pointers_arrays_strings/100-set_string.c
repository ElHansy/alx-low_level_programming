#include "main.h"

/**
 * set_string - sets the value of a pointer to value of char
 * @s: pointer to string that need to be copied
 * @to: pointer to string
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
