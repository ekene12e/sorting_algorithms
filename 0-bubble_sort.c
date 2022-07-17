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


	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++) 
	{
		if (array[j] > array[j + 1])
		{
		temp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = temp;
		print_array(array, size);
		}
	}
}

