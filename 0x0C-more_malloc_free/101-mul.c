#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _isdigit - checks if c digit
 * @c: character to check
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 * Return: the result
 */

char *big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, d;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = d = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}


/**
 * main - multiply two big number strings
 * @argc: the count arguments
 * @argv: the argument values
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *r;
	int a, c, d;

	if (argc != 3)
		printf("Error\n"), exit(98);

	d = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;

	while (c < d)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
