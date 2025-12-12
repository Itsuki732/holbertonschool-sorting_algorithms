#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *               using the selection sort algorithm
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		size_t jMin = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[jMin])
				jMin = j;

		if (jMin != i)
		{
			int temp = array[i];

			array[i] = array[jMin];
			array[jMin] = temp;

			print_array(array, size);
		}
	}
}
