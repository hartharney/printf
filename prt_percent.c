#include <stdarg.h>
#include "main.h"
/**
 * prt_percent - takes a format specifier and prints a string
 * Return: count of characters printed
 */
int prt_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
