#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

void bubble_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

size_t i, len = size;
int c = 1;

while (c)
{
c = 0;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
swap(array + i, array + i + 1);
print_array(array, size);
c = 1;
}
}
len--;
}
}
