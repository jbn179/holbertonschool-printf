#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 * Description : This function processes a format string and prints the
 * corresponding characters or values based on the specifiers it
 * encounters.
 * The function use va_list to handle variable arguments passed
 * after the format string, and an array of format_specifier
 * structures to map each specifier ('c', 's', 'd', 'i', '%')
 * to its associated printing function.
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;
	va_list args;
	format_specifier handler[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'%', print_percent},
		{0, NULL},
	};
	int j;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == NULL)
			{
				va_end(args);
				return (-1);
			}

			for (j = 0; handler[j].specifier != 0; j++)
			{
				if (format[i] == handler[j].specifier)
				{
					count += handler[j].func(args);
					break;
				}
			}
			if (handler[j].specifier == 0)
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

