#include "main.h"
/**
 * jack_bauer - Entry function
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i, m;
for (i = 0; i < 24; ++i)
{
for (m = 0; m < 60; ++m)
{
if (i < 10)
{
_putchar('0');
_putchar('0' + i);
}
else
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
_putchar(':');
if (m < 10)
{
_putchar('0');
_putchar('0' + m);
}
else
{
_putchar('0' + m / 10);
_putchar('0' + m % 10);
}
_putchar('\n');
}
m = 0;
}
}
