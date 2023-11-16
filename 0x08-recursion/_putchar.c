#include <unistd.h>

/**
 * _putchar - writes the char
 * @c: The char to print
 * Return: 1.
 * error, -1
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
