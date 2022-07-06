#include "main.h"
/**
 * function print last digit
 * Return: value of last didit
 */
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
ld = -1;
_putchar(ld + '0');
return (ld);
}
