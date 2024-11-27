#include "main.h"

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

	format_specifier specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'%', print_char}
	};

	int j;

	int num_specifiers = sizeof(specifiers) / sizeof(specifiers[0]);

	va_start(args, format);
	
	while (format[i])
	{
		if (*format == '%')
		{
			i++;
			specifier = format[i];

			for (j = 0; j < num_specifiers; j++)
			{
				if (format[i] == handler[j].specifier)
				{
					count += handler[j].func(args);
					break;
				}
			}
			if (j == num_specifiers)
			{
				write(1, "%", 1);
				write(1, &specifier, 1);
				count += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
