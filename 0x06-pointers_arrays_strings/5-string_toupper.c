#include "main.h"
/**
 * string_toupper -  Entry function
 * @str: pointer to char
 * Return: char
 */
char *string_toupper(char *str)
{
    int ascii_str, i;

    while (str[i] != '\0')
    {
        ascii_str = (int)str[i];
        if (ascii_str > 96 && ascii_str < 123)
        {
            ascii_str -= 32;
            str[i] = (char)ascii_str;
        }
        i++;
    }
    return (str);
}
