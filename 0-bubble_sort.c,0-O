#include "sort.h"


/**
 * swaps - Swaps two elements in an array
 * @i: First element
 * @j: Second element
 */

void swaps(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;

}

/**
 * bubble_sort - Sorts an array of
 * integers in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{

		for (j = 0; j < size - i - 1; j++)
		{

			if (array[j] > array[j + 1])
			{
				swaps(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
