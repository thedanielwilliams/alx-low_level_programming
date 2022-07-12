#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Entry function
 * @str: pointers
 * Return: nothing
 */
void puts_half(char *str)
{
    int half;
    int size = strlen(str);
    half = size/2;

    while (str[half] != '\0'){
        _putchar(str[half]);
        half++;
    }
    _putchar('\n');
}
