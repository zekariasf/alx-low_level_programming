#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string parameter to be printed
 * @n: number of arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *st;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(args, char *);
		if (st)
			printf("%s", st);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
