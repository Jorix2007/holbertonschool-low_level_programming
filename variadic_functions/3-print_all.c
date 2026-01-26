#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a char.
 * @args: A list of arguments pointing to the character to be printed.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: A list of arguments pointing to the integer to be printed.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: A list of arguments pointing to the float to be printed.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: A list of arguments pointing to the string to be printed.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	printer_t funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (funcs[j].symbol)
		{
			if (format[i] == funcs[j].symbol)
			{
				printf("%s", sep);
				funcs[j].print(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
