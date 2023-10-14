#include "main.h"

/**
 * _islower - search lower case
 *
 * @c: character to be checked
 *
 * Return: 1 if upper or 0 if anything
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
