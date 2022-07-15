#include "main.h"
#include <string.h>
/**
 * _strcat - Entry Function
 * @dest: pointer to char type
 * @src: pointer to char type
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
    char *srcPtr = src;
    int i, srcLen, destLen;

    srcLen = strlen(src);
    destLen = strlen(dest);

    for (i = 0; i < srcLen; i++)
    {
        dest[destLen + i] = *srcPtr++;
    }

    return (dest);
}
