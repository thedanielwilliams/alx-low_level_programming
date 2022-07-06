
#include "main.h"
#include "6-abs.c"
/**
 * print_to_98 - Entry Function
 * @n: integer n
 * Result: 0.
 */
void print_to_98(int n)
{
int i;
if (n < 99 && n >= 0)
{
for (i = n; i < 99; ++i)
{
if (i < 10)
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
else if (n < 0 && n < 99)
{
for (i = n; i < 99; ++i)
{
if (i < 10)
{
if (i > 0)
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
else
{
int f;
f = _abs(i);
if (f != 0)
{
_putchar('-');
}
if (f < 10)
{
_putchar('0' + f);
}
else
{
_putchar('0' + f / 10);
_putchar('0' + f % 10);
}
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
else if (n > 99)
{
for (i = n; i < 99; --i)
{
_putchar('0' + i / 100);
if (i > 99)
{
if (i / 100 > 9)
{
int r;
r = i / 100;
_putchar('0' + r % 10);
}
else
{
_putchar('0' + 0);
}
_putchar(',');
_putchar(' ');
}
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
_putchar('\n');
}
}
