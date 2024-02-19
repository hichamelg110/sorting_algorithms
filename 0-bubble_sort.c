#include "sort.h"

/**
 * swap_ints - a function that swap two integers in an array
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
 * bubble_sort - sort an array of integers in ascending order
 * @array: The array of integers to sort
 * @size: The size
 *
 */

void bubble_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

size_t i, len = size;
bool swap;

do {
swap = false;
for (i = 0; i < len - 1; i++) {
if (array[i] > array[i + 1]) {
int c = array[i];
array[i] = array[i + 1];
array[i + 1] = c;
print_array(array, size);
swap = true;
}
}
len--;
} while (swap);
}

