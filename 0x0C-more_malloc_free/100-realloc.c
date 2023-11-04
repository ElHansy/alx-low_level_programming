#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new size
 * Return: new ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		ptr2[i] = copy[i];
	free(ptr);
	return (ptr2);
}
