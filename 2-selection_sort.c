#include "sort.h"

/**
 * swap_ints - a fucntion that wap two integers in an array
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_ints(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * selection_sort - the selection sort algorithm to sort an integer array.
 * @array: The target array that needs to be sorted.
 * @size: The number of elements in the array.
 *
 */
void selection_sort(int *array, size_t size)
{
int *k;
size_t c, v;

if (array == NULL || size < 2)
return;

for (c = 0; c < size - 1; c++)
{
k = array + c;
        
for (v = c + 1; v < size; v++)
{
if (array[v] < *k)
k = array + v;
}

if ((array + c) != k)
{
swap_ints(array + c, k);
print_array(array, size);
}
}
}

