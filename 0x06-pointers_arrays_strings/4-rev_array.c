#include "main.h"
/**
 * reverse_array - Entry function
 * @a: pointer to array
 * @n: length of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
    int i, mid;

    for (i = 0; i < n / 2; i++)
    {
        mid = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = mid;
    }
}
