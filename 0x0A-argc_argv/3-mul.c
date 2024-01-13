#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two numbers
 * @argc: count strings
 * @argv: value of strings
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc > 3 || argc == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = i+1; j < argc; j++)
		{
			printf("%i\n", (atoi(argv[i])) * (atoi(argv[j])));
		}
	}
	return (0);
}
