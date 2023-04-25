#include "main.h"

/**
 * prt_string - format specifier to print a string
 * @args: variadic argument
 * Return: count of functions printed
 */
int prt_string(va_list args)
{
	int i, count = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
