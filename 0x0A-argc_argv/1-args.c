#include <stdio.h>
/**
 * main - arguments to passed
 * @argc: argument
 * @argv: program command line arguments
 * Return: Always 0 to exit
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

