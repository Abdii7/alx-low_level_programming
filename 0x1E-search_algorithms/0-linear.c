#include "search_algos.h"


/**
 * search lnear form in array for element
 * @array: array list
 * @size: size of the array
 * @value: value of the array
 * Return: index where user looks for
 */



int linear_search(int *array, size_t size, int value)
{
	// Check if the array or the value is NULL
	if (array == NULL)
		return (-1);

	// Initialize the index
	size_t i = 0;

	// Iterate over the array
	for (; i < size; i++)
	{
		// Print the value at index i
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		// If the value at index i is equal to the value, return the index
		if (array[i] == value)
			return (i);
	}

	// If the value is not found, return -1
	return (-1);
}