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
