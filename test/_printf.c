#include "main.h"

/**
* _printf - produces output according to a format
* @format: a character string containing zero or more directives
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	format_specifier specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'%', print_char}
	};
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (int i = 0; i < 5; i++)

			{
				if (*format == specifiers[i].specifier)
				{
					count += specifiers[i].func(args);
					break;
				}
			}
		}
		else
		{
			count += print_char(*format);
		}
		format++;
	}

	va_end(args);
	return (count);
}
