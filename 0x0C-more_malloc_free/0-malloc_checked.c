#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: input int
 * Return: 0
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
