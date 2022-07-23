#include <stdio.h>
#include <stdlib.h>
/**
 * main - print passed argument
 * @argc: arguments
 * @argv: program command line
 * Return: Always 0 to exit
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
