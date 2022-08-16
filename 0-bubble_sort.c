#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be printed
 * @size: no. of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, temp, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
