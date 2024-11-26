#include "main.h"
#include <stdarg.h>

/**
 * print_char - function that prints a character
 * @args: variable argument list containing the character to print
 * Description: function that prints a character
 * Return: the number of characters printed, 1 if success, -1 if error
 */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	if (c == '\0')
		return (-1);

	return (write(1, &c, 1));
}

/**
 * print_string - function that prints a string
 * @args: variable argument list containing the character to print
 * Description: function that prints a string
 * Return: the number of characters printed
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	size_t count = 0;

	if (s == NULL)
		return (-1);

	while (s[count] != '\0')
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}

/**
 * print_integer - function that prints an integer
 * @args: variable argument list containing the character to print
 * Description: function that prints an integer
 * Return: the number of characters printed
 */

int print_integer(va_list args)
{
	int n = va_arg(args, int);

	char buffer[12];
	int i = 0, count = 0;
	unsigned int num;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}

	else
		num = n;

	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);


	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		count++;
	}
	return (count);
}
