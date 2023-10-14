#include "main.h"

/**
 * _isalpha - entry
 * @c: character
 * Return: 1 if c is a letter, lowercase and  uppercase or Returns 0 otherwise
 *
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
