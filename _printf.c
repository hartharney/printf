#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: pointer to format string
 * Return: count of printed characters.
 */
int _printf(const char *format, ...)
{
	int count;
	int i;
	int j;
	va_list args;

	my_type m[] = {
		{"%%", prt_percent},
		{"%S", prt_string},
		/*{"%c", prt_char}*/
	};

	count = 0;
	i = 0;

	if (format == NULL)
		return (0);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else
		{
			for (j = 0 ; j < 2 ; j++)
			{
				if (m[j].id[1] == format[i + 1])
				{
					count += m[j].function(args);
				}
			}
			i = i + 1;
		}
		i++;
	}
	va_end(args);
	return (count);
}
