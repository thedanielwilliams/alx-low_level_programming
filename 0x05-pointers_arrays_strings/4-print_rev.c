#include "main.h"
#include <string.h>
void trim(char *s);
/**
 * print_rev - Entry function
 * @s: pointer to char
 * Return: 0
 */
void print_rev(char *s)
{
int i;
int size = strlen(s);
i = size - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}   
_putchar('\n');
}
