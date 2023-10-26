#include <unistd.h>

/**
 * _putchar - print 1 char
 * @c: input char
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
