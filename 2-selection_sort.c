#include "sort.h"

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
