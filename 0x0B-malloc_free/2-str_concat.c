#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i, j;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	ptr = malloc(sizeof(char) * (l1 + l2));

	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		ptr[j++] = s2[i++];
	}
	return (ptr);
}
