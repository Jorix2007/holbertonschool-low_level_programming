#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Jabir Hasanli
 * Desc: Header file containing prototypes for all functions
 *       used in the more_malloc_free directory.
 */

#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif