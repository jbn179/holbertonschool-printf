#include "main.h"

/**
 * print_string - function that prints a string
 * @s: the string to print
 * Description: function that prints a string
 * Return: the number of characters printed
 */

int print_string(char *s)
{
	if (s == NULL)
		return (0);

	size_t count = 0;

	while (s[count] != '\0')
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}
