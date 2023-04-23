#include "main.h"
/**
 * prt_string - format specifier to print a string
 * @args: variadic argument
 * Return: count of functions printed
 */
int prt_string(va_list args)
{
	char *s = va_arg(args, char*);

	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
