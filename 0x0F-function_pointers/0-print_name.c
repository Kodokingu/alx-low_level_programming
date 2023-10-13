#include "function_pointers.h"
#include <stdio.h>
/**
 * main - print_name - print using pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
