#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swaps - Swaps two integers in an array
 * @i: Pointer to the first integer
 * @j: Pointer to the second integer
 */
void swaps(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * partition - Partitions the array for quicksort using the Lomuto scheme
 * @arr: The array to be partitioned
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * Return: The index of the pivot element after partition
 */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swaps(&arr[i], &arr[j]);
			print_array(arr, high + 1);
		}
	}
	swaps(&arr[i + 1], &arr[high]);
	print_array(arr, high + 1);
	return (i + 1);
}

/**
 * quicksort - Helper function to implement quicksort
 * @arr: The array to be sorted
 * @low: The starting index of the array
 * @high: The ending index of the array
 */
void quicksort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using the Quick sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1);
}

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in the array
 */
void print_array_1(const int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

