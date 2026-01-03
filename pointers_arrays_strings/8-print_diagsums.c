#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The pointer to the matrix (cast as a 1D array)
 * @size: The size of the matrix (size x size)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	/* Loop through the rows to calculate both sums */
	for (i = 0; i < size; i++)
	{
		/* * Main Diagonal:
		 * Elements are at indices: 0, (size+1), (size+1)*2, ...
		 * Logic: current_row_index * (size + 1)
		 */
		sum1 += a[i * (size + 1)];

		/* * Secondary Diagonal:
		 * Elements are at indices: (size-1), (size-1)*2, (size-1)*3, ...
		 * Logic: (current_row_index + 1) * (size - 1)
		 */
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
