#include "main.h"
/**
 *print_alphabet - function to print alphabet
 *
 * return: always 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
