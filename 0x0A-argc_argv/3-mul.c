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
	int result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", result);

	return (0);
}
