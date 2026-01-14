#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the starting integer
 * @max: the ending integer
 *
 * Return: pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* 1. Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* 2. Calculate the exact size needed */
	size = (max - min) + 1;

	/* 3. Allocate memory for 'size' number of integers */
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	/* 4. Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
