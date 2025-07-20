#include "main.h"

/**
 * print_int - Prints an integer to stdout
 * @args: The va_list containing the integer
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, divisor = 1, count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		count += _putchar('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
