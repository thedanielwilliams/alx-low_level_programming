#include <stdio.h>
#include <stdlib.h>
/**
 * main - function multiplies 2 numbers.
 * @argc: argument c.
 * @argv: program command line argument
 * Return: Always 0 to exit
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
