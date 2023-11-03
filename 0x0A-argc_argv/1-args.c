#include <stdio.h>

/**
* main -  Prints number of arguements
* @argc: arguements count
* @argv: arguments string values
* Return: 0
**/

int main(int argc, char *argv[])
{
	*argv = *argv;

	printf("%d\n", argc - 1);
	return (0);
}
