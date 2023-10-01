#include "main.h"
/**
 * main - declare and determine lenght of S
 *
 * Retunr the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
