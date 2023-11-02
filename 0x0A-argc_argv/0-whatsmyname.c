#include<stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: command lines argument count
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
