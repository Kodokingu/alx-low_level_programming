#include "main.h"
/**
 * _pow_recersion - returns the value of x raised to the power of y
 * @x; to be raise 
 * @y: the power
 * Return: power
 */
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
