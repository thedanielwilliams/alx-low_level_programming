#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints the minimum number of coins
 * @argc: command line arguments
 * @argv: array contains program command line arguments
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int centchange, numberofcoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	centchange = atoi(argv[1]);

	while (centchange > 0)
	{
		if (centchange >= 25)
			centchange = centchange - 25;
		else if (centchange >= 10)
			centchange = centchange - 10;
		else if (centchange >= 5)
			centchange = centchange - 5;
		else if (centchange >= 2)
			centchange = centchange - 2;
		else if (centchange >= 1)
			centchange = centchange - 1;
		numberofcoins = numberofcoins + 1;
	}
	printf("%d\n", numberofcoins);
	return (0);
}


