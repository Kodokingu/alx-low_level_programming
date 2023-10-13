#include "3-calc.h"

int op_sub(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);

/**
 * main - op_add - Returns the sum
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * main - op_sub - Returns the diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * main - op_mul - Returns the prod
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * main - op_div - Returns the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * main - op_mod - Returns the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
