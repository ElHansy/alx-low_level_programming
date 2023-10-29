#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string input
 * Return: the length of a string
*/


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string
 * @s: string input
 * @nm1: smallest iterator
 * @nm2: biggest iterator
 * Return: 1 if a string is a palindrome and 0 if not
 */


int comparator(char *s, int nm1, int nm2)
{
	if (*(s + nm1) == *(s + nm2))
	{
		if (nm1 == nm2 || nm1 == nm2 + 1)
			return (1);
		return (0 + comparator(s, nm1 + 1, nm2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
