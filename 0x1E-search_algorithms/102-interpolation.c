#include <stdio.h>
#include "search_algos.h"


int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", low,
					array[low]);
				return (low);
			}
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos,
				array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}