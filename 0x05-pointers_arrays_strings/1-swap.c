#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: Integer that the code swaps
 * @b: Integer that the code swaps
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
