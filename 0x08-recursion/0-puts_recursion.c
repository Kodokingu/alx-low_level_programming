#include "main.h"
/**
 * This puts recursion
 * sets per
 * else state
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
} 
