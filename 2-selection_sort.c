#include "sort.h"

/**
 * selection_sort - Sort array usinf selection method
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
		size_t i, j;
		int *aux, *chn, tmp;

		if (!array || size < 2)
			return;
		for (i = 0; i < size - 1; i++)
		{
			aux = array + i;
			for (j = i + 1; j < size; j++)
				if (array[j] < *aux)
					aux = array + j;
			if (array + i != aux)
			{
				chn = array + i;
				tmp = *chn;
				*chn = *aux;
				*aux = tmp;
				print_array(array, size);
			}
		}
}
