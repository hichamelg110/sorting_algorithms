#include "sort.h"

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
