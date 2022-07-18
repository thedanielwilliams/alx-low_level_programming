#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: Pointer to string variable
 * @c: char variable type
 * Return: s or NULL.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
	if (*s == c)
	{
		return (s);
	}
	s++;
}
if (*s == c)
{
	return (s);
}
return (0);
}
