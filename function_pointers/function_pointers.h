#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

/* Prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
