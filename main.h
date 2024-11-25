#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int print_char(char c);
int print_string(char *s);
int print_integer(int n);
int handle_format(char specifier, va_list args);

#endif
