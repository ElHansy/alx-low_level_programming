
#include <stdio.h>

/**
 * main - main function print its name
 * @argc: count arguments
 * @argv: value string of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
