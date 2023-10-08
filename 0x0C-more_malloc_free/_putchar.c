#include "main.h"
#include <unistd.h>
/**
 * main - _putchar - writes the char
 *
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}

