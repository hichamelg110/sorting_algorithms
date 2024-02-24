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

/**
 * quick_sort - Sorts an array of integers in ascending order using the Quick sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}

lomuto_sort(array, size, 0, size - 1);
}

/**
 * lomuto_sort - Implements the quicksort algorithm using the Lomuto partition scheme.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
if (right - left > 0)
{
int pivot_index = lomuto_partition(array, size, left, right);
lomuto_sort(array, size, left, pivot_index - 1);
lomuto_sort(array, size, pivot_index + 1, right);
}
}

/**
 * lomuto_partition - Performs the Lomuto partition scheme on an array.
 * @array: The array to be partitioned.
 * @size: The size of the array.
 * @left: The starting index of the partition.
 * @right: The ending index of the partition.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
int pivot = array[right];
int i = left;
int j;

for (j = left; j < right; j++)
{
if (array[j] < pivot)
{
if (i < j)
{
swap_ints(array + i, array + j);
print_array(array, size);
}
i++;
}
}

if (array[i] > pivot)
{
swap_ints(array + i, array + right);
print_array(array, size);
}

return i;
}

