#include "function_pointers.h"
/**
 * array_iterator - function execute function on each array element
 * @array: array
 * @size: size array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
