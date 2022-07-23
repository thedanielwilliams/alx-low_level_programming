#include <stdio.h>
/**
 * main - prints name
 * @argc: arguments
 * @argv: command line arguments
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
