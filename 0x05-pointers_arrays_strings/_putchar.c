#include <unistd.h>

/**
 * _putchar -
 * @c: input
 * Return: 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
