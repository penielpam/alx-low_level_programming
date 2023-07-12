#include "search_algos.h"

/**
  * binary_search - Searches for a value using binary search.
  * @array: A pointer to the first element
  * @size: The no. of elements 
  * @value: The value to be looked for.
  * Return -1 If the value is absent or the array is NULL
  *         Otherwise, locate the index value
  */


int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;


	if (array == NULL)
		return (-1);


	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);


		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}


	return (-1);
}
