#include "main.h"
/**
 * _memset - Entry Function
 * @s: pointer to char
 * @b: char variable type
 * @n: unsigned int variable type
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
