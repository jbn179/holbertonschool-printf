#include "main.h"

/**
 * print_integer - function that prints an integer
 * @n: the integer to print
 * Description: function that prints an integer
 * Return: the number of characters printed
 */

int print_integer(int n)
{
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
