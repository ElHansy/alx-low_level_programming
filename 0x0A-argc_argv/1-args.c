#include <stdio.h>

/**
* main -  Prints number of arguments
* @argc: arguments count
* @argv: arguments string values
* Return: 0
**/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
