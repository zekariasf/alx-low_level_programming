#include<stdio.h>
#include "3-calc.h"
/**
 * op_add - returns the sum of a nd b
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: result of add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: integer parameter
 * @b: integer parameter
 * Return: result of sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the multiplication of a and b
 * @a: integer parameter
 * @b: integer parameter
 * Return: result of mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the divison of a and b
 * @a: integer parameter
 * @b: integer parameter
 * Return: result of div
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - returns the modulo of a and b
 * @a: integer parameter
 * @b: integer parameter
 * Return: result of modulo
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
