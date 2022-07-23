#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sum two positive numbers
 * @argc: arguments
 * @argv: number of program command line arguments
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
