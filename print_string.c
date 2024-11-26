#include "main.h"

/**
 * print_string - function that prints a string
 * @s: the string to print
 * Description: function that prints a string
 * Return: the number of characters printed
 */

int print_string(char *s)
{
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
