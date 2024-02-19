#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
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

size_t i, len;
bool swap;

for (len = size; len > 1 && (swap = false); len--) {
for (i = 0; i < len - 1; i++) {
if (array[i] > array[i + 1]) {
swap_ints(array + i, array + i + 1);
print_array(array, size);
swap = true;
}
}
}
}
