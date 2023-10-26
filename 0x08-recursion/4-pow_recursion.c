#include "main.h"
/**
 * _pow_recursion - a fun that returns the value x raised to the power of y
 * @x: integer value to raise
 * @y: power
 *
 * Return: if y is lower than 0 returns -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
