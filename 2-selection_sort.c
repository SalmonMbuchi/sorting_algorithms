#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort algorithm
 * @array: an array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_val, temp;

	for (i = 0; i < size - 1; i++)
	{
		min_val = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_val])
				min_val = j;
		}
		if (min_val != i)
		{
			temp = array[i];
			array[i] = array[min_val];
			array[min_val] = temp;
		}
		print_array(array, size);
	}
}
