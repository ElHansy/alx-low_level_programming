#include <stdio.h>
/**
* main -  writes program name
* @argc: arguement count
* @argv: string arguements
* Return: 0
**/

int main(int argc, char *argv[])
{
	*argv = *argv;

	printf("%d\n",argc - 1);
	return (0);
}
