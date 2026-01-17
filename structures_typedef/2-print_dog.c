#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	/* 1. Если самой структуры нет - ничего не делаем */
	if (d == NULL)
		return;

	/* 2. Проверяем Имя */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* 3. Возраст печатаем всегда (число не может быть NULL) */
	printf("Age: %f\n", d->age);

	/* 4. Проверяем Владельца */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}