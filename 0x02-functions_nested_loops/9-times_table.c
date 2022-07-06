
#include "main.h"
/**
 * times_table - Entry function
 * Return: value
 */
void times_table(void)
{
int num, i, j, row;
num = 9;
for (i = 0; i < num + 1; ++i)
{
for (j = 0; j < num + 1; ++j)
{
row = i * j;
if (j == 0)
{
_putchar('0' + row);
}
else if (row < 10)
{
_putchar(' ');
_putchar('0' + row);
}
else
{
_putchar('0' + row / 10);
_putchar('0' + row % 10);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
