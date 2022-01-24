#include <stdio.h>
#include "search_algos.h"

int binary_search_main(int *array, size_t low, size_t high, int value);
void print_array_range(int *array, size_t low, size_t high);

int exponential_search(int *array, size_t size, int value)
{
	size_t bound, bound_half;

	if (!array)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	bound = bound > size - 1 ? size - 1 : bound;
	bound_half = bound % 2 == 0 ? bound / 2 : bound / 2 + 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
			bound_half, bound);

	return (binary_search_main(array, bound_half, bound, value));
}

int binary_search_main(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	print_array_range(array, low, high);
	if (low == high && array[low] == value)
		return (low);
	while (low < high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			return (binary_search_main(array, mid + 1, high, value));
		else
			return (binary_search_main(array, low, mid - 1, value));
	}

	return (-1);
}

void print_array_range(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; ++i)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}