#include "main.h"
/**
 * _isdigit - Entry function
 * @c: character
 * Return: Always 0 or 1.
 */
int _isdigit(int c)
{
if (c > 47 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
