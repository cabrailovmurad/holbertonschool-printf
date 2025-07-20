#include "main.h"

/**
 * print_percent - Prints a percent sign
 *
 * Return: 1 (number of characters printed)
 */
int print_percent(void)
{
	return (write(1, "%", 1));
}
