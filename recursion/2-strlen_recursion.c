#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* Базовый случай: если конец строки, длина равна 0 */
	if (*s == '\0')
	{
		return (0);
	}

	/* Рекурсивный шаг: 1 (текущий символ) + длина остатка */
	return (1 + _strlen_recursion(s + 1));
}
