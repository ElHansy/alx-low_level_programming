#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * @str: pointer to a new string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, size;

	if (*str == 0)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == NULL)
                return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
