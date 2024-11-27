#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;
	int i;
	char specifier;

	format_specifier specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'%', print_percent}
	};

	va_start(args, format);

	while (format[i])
	{
		if (*format == '%')
		{
			i++;
			specifier = format[i];
			for (int j = 0; j < 5; j++)
			{
				if (specifier == specifiers[j].specifier)
				{
					count += specifiers[j].func(args);
					break;
				}
			}
		}
		else
		{
			count += print_char(format[i]);
		}
		format++;
	}
	va_end(args);
	return (count);
}
