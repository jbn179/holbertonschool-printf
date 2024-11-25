#include "main.h"

/**
 * print_char - function that prints a character
 * @c: the character to print
 * Description: function that prints a character
 * Return: the number of characters printed, 1 if success, -1 if error
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - function that prints a string
 * @s: the string to print
 * Description: function that prints a string
 * Return: the number of characters printed
 */

int print_string(char *s)
{



}

/**
 * print_integer - function that prints an integer
 * @n: the integer to print
 * Description: function that prints an integer
 * Return: the number of characters printed
 */

int print_integer(int n)
{



}

/**
 * handle_format - handles format specifiers and prints corresponding values
 * @specifier: the format specifier character
 * @args: the list of arguments passed to _printf
 * Description: handles format specifiers and prints corresponding values
 * Return: the number of characters printed for this specifier
 */

int handle_format(char specifier, va_list args)
{



}
