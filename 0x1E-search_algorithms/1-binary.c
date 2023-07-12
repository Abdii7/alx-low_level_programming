#include "search_algos.h"

// This function prints all elements in an array
void print_array(int *array, size_t i, size_t size);

/**
 * binary_search - binary search algorithm in a string
 * @array: list of elements
 * @size: size of the list
 * @value: target to search
 * Return: element index on success (-1) on fail
 */
int binary_search(int *array, size_t size, int value)
{
	// Check if the array or the value is NULL
	if (array == NULL || value == 0)
		return (-1);

	// Print the array from index 0 to size - 1
	print_array(array, 0, size);

	// Initialize the low and high indexes
	size_t low = 0, high = size - 1, half = 0;

	// While low is less than high
	while (low < high)
	{
		// Calculate the middle element
		half = (low + high) / 2;

		// If the middle element is less than the value
		if (array[half] < value)
		{
			// Update low to the next element
			low = half + 1;

			// Print the array from index low to high + 1
			print_array(array, low, high + 1);
		}
		// If the middle element is greater than the value
		else if (array[half] > value)
		{
			// Update high to the previous element
			high = half - 1;

			// Print the array from index low to high + 1
			print_array(array, low, high + 1);
		}
		// If the middle element is equal to the value, return the index
		else
			return (array[half]);
	}

	// If the value is not found, return -1
	return (-1);
}

/**
 * print_array - print all elements in an array
 * @array: list of elements
 * @i: index to init
 * @size: size of the array
 */
void print_array(int *array, size_t i, size_t size)
{
	// Print the message "Searching in array: "
	printf("Searching in array: ");

	// Print all elements from index i to size - 1, separated by a comma
	while (i < size)
	{
		// If this is the last element, don't print a comma
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}

	// Print a newline
	printf("\n");
}
