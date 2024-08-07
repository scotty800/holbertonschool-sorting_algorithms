#include "sort.h"

/**
 * swaps - Swaps two elements in an array
 * @i: First element
 * @j: Second element
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, imin;
	int tmp;
	for (i = 0; i < size - 1; i++)
	{
		imin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[imin])
				imin = j;
		}

		tmp = array[i];
		array[i] = array[imin];
		array[imin] = tmp;
		print_array(array, size);
	}
}
