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
	write(1, &i, 1);
	/*_putchar(i);*/
	return (1);
}
