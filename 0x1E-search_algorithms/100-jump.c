#include "search_algos.h"

/**
  * jump_search - Searches for a value .
  * @array: A pointer to the 1st element .
  * @size: The number of elements.
  * @value: The value to be looked for.
  *
  * Return -1 If the value is not present .
  *         Otherwise, the initial index where the value is situated.
  */


int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;


	if (array == NULL || size == 0)
		return (-1);


	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}


	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);


	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);


	return (array[i] == value ? (int)i : -1);
}
