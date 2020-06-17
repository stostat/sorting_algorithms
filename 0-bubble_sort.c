#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: pointer to array
 * @size: size
 * return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
	}
}

/**
 * swap - swaps two numbers
 * @x: int
 * @y: int
 * return: void
 */
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
