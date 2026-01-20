#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Jabir Hasanli
 * Desc: Header file containing prototypes for all functions
 *       used in the function_pointers directory.
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif