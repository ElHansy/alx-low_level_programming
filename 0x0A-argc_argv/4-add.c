#include <stdio.h>
#include <stdlib.h>

/**
 * IsNotInteger - checks if s is an integer
 * ////acc to isInteger if return 1 (failed) false (not valid int)//
 * ////0 is true (success) (valid int) now need to use atoi//
 * @s: string input
 * Return: 0 valid or 1 not valid
*/

int IsNotInteger(const char *s)
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
 * ////in if statment if the output is 0 mean false now need to use atoi//
 * ////any value not 0 is true (general if statment rules)//
 * @argc: counts
 * @argv: values
 * Return: 0 success 1 failure
*/

int main(int argc, char const *argv[])
{
	int result = 0;

	while (--argc)

	{
		if (IsNotInteger(argv[argc]))
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
