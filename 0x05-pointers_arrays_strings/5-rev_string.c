#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Entry function
 * @s: pointer to char
 * Return: nothing.
 */
void rev_string(char *s)
{
int len, i, half;
char temp;
for (len = 0; s[len] != '\0'; len++)
i = 0;
half = len / 2;
while (half--)
{
temp = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = temp;
i++;
}
}
