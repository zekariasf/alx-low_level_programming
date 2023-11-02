#include<stdio.h>
#include<stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: arguments count
 * @argv: array with the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;
	char e[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", e);
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mul);
	return (0);
}
