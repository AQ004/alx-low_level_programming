#ifndef MACROS_H
#define MACROS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct datType - specifiers and datatypes
 * @datType: %s %i %f %c
 * @function: function that makes that prints the specifier
 */
typedef struct datType
{
	char *datType;
	void (*function)(char *, va_list);
} datType_s;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
