#include "main.h"
/**
 * swap_int - Entry function
 * @a: pointer to integer data type
 * @b: pointer to integer data type
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int sum = *a + *b;
*a = sum - *a;
*b = sum - *b;
}
