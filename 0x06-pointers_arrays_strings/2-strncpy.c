#include "main.h"
/**
 * _strncpy - Entry function
 * @dest: pointer to char dest
 * @src: pointer to char src
 * @n: number of src to copy to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *srcPtr = src;
    int i;
    
    for (i = 0; i < n; i++)
        dest[i] = *srcPtr++;
    return (dest);
}
