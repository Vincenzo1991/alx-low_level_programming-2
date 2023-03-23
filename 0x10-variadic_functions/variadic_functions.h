#ifndef VERIADIC_FUNCTIONS_H
#define VERIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - a struct type defining a new printer
 * @symbol: represents a data type
 * @print: prints the data type with its symbol
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
