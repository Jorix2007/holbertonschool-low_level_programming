#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: The chessboard to be printed (pointer to array of 8 chars)
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Проходим по 8 строкам */
	for (i = 0; i < 8; i++)
	{
		/* Проходим по 8 колонкам в каждой строке */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		/* Переход на новую строку после печати ряда */
		_putchar('\n');
	}
}
