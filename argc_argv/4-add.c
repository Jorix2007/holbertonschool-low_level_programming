#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* Loop through each argument starting from index 1 */
	for (i = 1; i < argc; i++)
	{
		/* Loop through each character of the current argument string */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* Check if the character is NOT a digit */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		/* If all characters were digits, add to sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
