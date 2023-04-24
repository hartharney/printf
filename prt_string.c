#include "main.h"

/**
 * print_buffer - print all the char stored in the buffer
 * @buffer: pointer to buffer
 * @num_of_bytes: size of charater stored in buffer
 * return: void
 */
void print_buffer(char *buffer, unsigned int num_of_bytes)
{
	write(1, buffer, num_of_bytes);
}
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
	char buffer[1024];
	unsigned int num_of_bytes;

	i = 0;
	count = 0;
	num_of_bytes = 0;

	if (*s == '\0')
	{
		return (-1);
	}
	while (s[i] != '\0')
	{
		buffer[i] = s[i];
		num_of_bytes += 1;
		/*_putchar(s[i]);*/
		count += 1;
		i++;
	}

	print_buffer(buffer, num_of_bytes);

	return (count);
}
