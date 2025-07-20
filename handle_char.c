#include "main.h"

/**
 * print_char - Prints a single character
 * @args: List of arguments
 *
 * Return: 1 (number of characters printed)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}
