#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using bubble sort
 * @size: size of the array
 * @array: array to sort
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, j = 1, temp, n = 1;

	if (size < 2)
	return;
	do {
		for (i = 0, j = 1; j < size && i <= size - 1; i++, j++)
	{
		if (array[i] > array[j])
		{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
		}
	}
	i = 0;
	j = 1;
	n++;
	} while (n <= size);
}

