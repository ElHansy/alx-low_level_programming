#include "3-calc.h"

/**
 * main - program that perfroms command line operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int ar1, ar2, result;
	char a;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = ptr(ar1, ar2);

	printf("%d\n", result);

	return (0);
}
