#include "main.h"

/**
 * print_buffer - print all the characters stored in the buffer
 * @buffer: pointer to buffer
 * @num_of_bytes: size of characters stored in buffer
 * Return: void
 */
void print_buffer(char *buffer, unsigned int num_of_bytes)
{
	unsigned int i;

	for (i = 0; i < num_of_bytes; i++)
	{
		_putchar(buffer[i]);
	}
}
