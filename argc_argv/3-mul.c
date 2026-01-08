#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result;

	/* We need exactly 3 arguments: ./program, num1, num2 */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* atoi converts the string arguments to integers */
	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
