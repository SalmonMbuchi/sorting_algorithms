#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be printed
 * @size: no. of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t k = 0;
	bool swapped;
	int temp;

	/* guarantees that the whole array is sorted */
	do {
		swapped = false;
		{/* a single pass throuth the array */
			for (i = 0; i < size - 1 - k; i++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swapped = true;
				}
			print_array(array, size);
			}
			k++;
		}
	} while (swapped);
}
