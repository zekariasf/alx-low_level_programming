#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of times the character_is printed
 *
 * Return: void
 */
void print_line(int n)
{
	int x = 0;

	while (x <= n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
