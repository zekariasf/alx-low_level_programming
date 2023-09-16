#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times / is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int tmp = n, x;

	if (n > 0)
	{
		while (n > 0)
	{
		for (x = tmp - n; x > 0; x--)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	}
	else
	{
	_putchar('\n');
	}
}
