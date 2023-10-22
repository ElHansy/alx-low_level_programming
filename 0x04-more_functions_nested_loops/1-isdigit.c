#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 *
 * @c: int to be checked
 *
 * Return: successful digit is 1 is 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
