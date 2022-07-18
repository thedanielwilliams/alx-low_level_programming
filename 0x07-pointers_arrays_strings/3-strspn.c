#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int counter = 0;
    unsigned int acceptLen = strlen(accept);
    unsigned int sLen = strlen(s);

    for (i = 0; i < sLen; i++)
    {
        bool found_match = false;

        for (j = 0; j < acceptLen; j++)
        {
            if (accept[j] == s[i])
            {
                found_match = true;
                break;
            }
        }

        if (found_match == true)
        {
            counter++;
        }
        else
        {
            break;
        }
    }

    return counter;
}
