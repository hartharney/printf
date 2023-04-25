#include "main.h"

/**
 * prt_char - format specifier function to print a single character
 * @args: variadic argument
 * Return: count of characters printed
 */
int prt_char(va_list args)
{
	char c = (char)va_arg(args, int);
	_putchar(c);
	
	return (1);
}
