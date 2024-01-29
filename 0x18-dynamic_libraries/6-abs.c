#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *@n: integer
 * Return: returns 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	else
	{
		return (n);
	}
}

