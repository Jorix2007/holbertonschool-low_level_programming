#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* 1. Check for 0 input */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* 2. Allocate total memory (elements * size) */
	ptr = malloc(nmemb * size);

	/* 3. Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* 4. Set the memory to zero (the core feature of calloc) */
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	/* 5. Return the pointer */
	return (ptr);
}
