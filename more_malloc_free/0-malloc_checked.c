#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 * If malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Allocate b bytes of memory */
	ptr = malloc(b);

	/* If malloc fails, exit with status 98 */
	if (ptr == NULL)
		exit(98);

	/* Return the pointer */
	return (ptr);
}
