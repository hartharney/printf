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
