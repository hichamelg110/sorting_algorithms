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
 * bubble_sort - Sort an array of integers in ascending order
 * @array: The array of integers
 * @size: The size of the array
 *
 * Description: Prints the array after each swap.
 */
 
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

