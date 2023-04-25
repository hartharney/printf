#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format.
 * @format: pointer to format string
 * Return: count of printed characters.
 */
int _printf(const char *format, ...)
{
	int count = 0, i, j;
	va_list args;

	my_type m[] = {{"%%", prt_percent}, {"%s", prt_string}, {"%c", prt_char}};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			for (j = 0 ; j < 3 ; j++)
			{
				if (format[i] == *(m[j].id + 1))
				{
					count += m[j].function(args);
					break;
				}
			}
			if (j == 3)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
	}
	va_end(args);
	return (count);
}
