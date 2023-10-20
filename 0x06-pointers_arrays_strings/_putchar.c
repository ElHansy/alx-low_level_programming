#include <unistd.h>

/**
 * _putchar - function for print out put
 * @c: input
 * Return: 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
