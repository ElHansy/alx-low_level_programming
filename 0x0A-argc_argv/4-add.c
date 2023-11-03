#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if s is an integer
 * @s: string input
 * Return: 0 or 1
*/

int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: counts
 * @argv: values
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int result = 0;

	while (--argc)

	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		else
			result += atoi(argv[argc]);
	}
	printf("%i\n", result);
	return (0);
}
