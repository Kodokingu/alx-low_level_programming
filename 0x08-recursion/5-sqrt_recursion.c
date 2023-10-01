#include "main.h"
int _sqrt_recursion(int n)
/**
 * _sqrt_recursion - return the natural sqrt of a number
 */

/**
 * actual_sqrt_recursion - recurses to get natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
