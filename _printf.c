#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;
	char specifier;
	va_list args;

	format_specifier handler[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'%', print_char}
	};

	int j;

	int num_handler = sizeof(handler) / sizeof(handler[0]);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			specifier = format[i];

			for (j = 0; j < num_handler; j++)
			{
				if (specifier == handler[j].specifier)
				{
					count += handler[j].func(args);
					break;
				}
			}
			if (j == num_handler)
			{
				_putchar('%');
				_putchar(specifier);
				count += 2;
			}
		}
		else
		{
			_putchar (format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
