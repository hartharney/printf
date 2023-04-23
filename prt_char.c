#include "main.h"
/**
 * prt_char - format specifier functtion to print a single character
 * @args: variadic argument
 * Return: count of characters printed
 */
int prt_char(va_list args)
{
	char i;

	i = va_arg(args, int);
	if (i == '\0')
		return (0);

	_putchar(i);
	return (1);
}
