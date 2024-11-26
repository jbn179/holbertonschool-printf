#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct format_specifier - Structure associate
 *							sa format specifier with function
 * @specifier: The format specifier character (e.g., 'c', 's', 'd')
 * @func: Function pointer that handles this specific format specifier
 *
 * Description: This structure is used to link each format specifier to a
 * specific function that processes the corresponding argument(s) and returns
 * the number of characters printed.
 */
typedef struct format_specifier
{
char specifier;
int (*func)(va_list args);
} format_specifier;

/**
 * struct format_specifier - Structure associate
 *                          sa format specifier with function
 * @specifier: The format specifier character (e.g., 'c', 's', 'd')
 * @func: Function pointer that handles this specific format specifier
 *
 * Description: This structure is used to link each format specifier to a
 * specific function that processes the corresponding argument(s) and returns
 * the number of characters printed.
 */

typedef struct format_specifier
{
	char specifier;
	int (*func)(va_list args);
} format_specifier;

int print_char(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int _printf(const char *format, ...);

#endif
