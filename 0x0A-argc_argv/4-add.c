#include<stdio.h>
#include<stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, result = 0;
	char e[] = "Error", *is_char;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			is_char = argv[i];
			while (*is_char != 0)
			{
				if (*is_char < 47 || *is_char > 57)
				{
					printf("%s\n", e);
					return (1);
				}
				is_char++;
			}
			result = atoi(argv[i]);
			sum = sum + result;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}

