#include "main.h"
/**
 * _isalpha - Function checks alphabetic character.
 * @c: charcater to check if it's alphabet
 *
 * Return: Always 0,
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
