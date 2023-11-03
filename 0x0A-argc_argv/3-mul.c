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
	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%i\n", (atoi(argv[argc - 1])) * (atoi(argv[argc - 2])));
	}
	return (0);
}
