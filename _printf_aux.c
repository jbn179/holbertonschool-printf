#include "main.h"

/**
 * print_char - function that prints a character
 * @args: va_list containing the character to print
 * Description: Extracts a character from va_list and prints it
 * Return: 1 if successful (character printed), -1 if write fails
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
 * print_string - function that prints a string
 * @args: va_list containing the character to print
 * Description: function that prints a string
 * Return: the number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (s == 0)
		s = "(null)";
	while (s[count] != '\0')
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}
/**
 * print_integer - function that prints an integer
 * @args: va_list containing the character to print
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

/**
 * print_percent - Function that prints a percent sign '%'
 * @args: va_list containing the character to print
 * Description: function that prints a percent
 * Return: The number of characters printed (always 1)
 */

int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}
