#include "sort.h"

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
int pivot_index = hoare_partition(array, size, left, right);
lomuto_sort(array, size, left, pivot_index);
lomuto_sort(array, size, pivot_index + 1, right);
}
}

/**
 * hoare_partition - Performs the Hoare partition scheme on an array.
 * @array: The array to be partitioned.
 * @size: The size of the array.
 * @left: The starting index of the partition.
 * @right: The ending index of the partition.
 *
 * Return: The final partition index.
 */
int hoare_partition(int *array, size_t size, int left, int right)
{
int pivot = array[right];
int i = left - 1;
int j = right;

while (1)
{
do
{
i++;
}
while (array[i] < pivot);

do
{
j--;
}
while (array[j] > pivot && j > left);

if (i >= j)
{
break;
}

swap_ints(array + i, array + j);
print_array(array, size);
}

swap_ints(array + i, array + right);
print_array(array, size);

return i;
}

