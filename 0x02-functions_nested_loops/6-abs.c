#include "main.h"
#include <stdio.h>
/**
 * _abs - Entry Function
 * Descritpion: absolute value function
 * @c: int for number
 * Return: 0 or 1
 */
int _abs(int c)
{
int p;
if (c < 0)
{
p = c * -1;
}
else
{
p = c;
}
return (p);

}
