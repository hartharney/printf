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
	int count;

	i = 0;
	count = 0;

	if (*s == '\0')
	{
		s = "(nul)";
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			count += 1;
			i++;
		}
		return (count);
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		count += 1;
		i++;
	}

	return (count);
}
