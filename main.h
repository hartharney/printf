#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

void print_buffer(char *buffer, unsigned int num_of_bytes);
int _printf(const char *format, ...);
int _putchar(char c);
/**
 * struct format - structure that defines
 * the format specifier and the function that defines it
 * @id: character to identify specifier
 * @function: pointer to function for specifier
 */
typedef struct format
{
	char *id;
	int (*function)();
} my_type;

int prt_percent(va_list args);
int prt_string(va_list args);
int prt_char(va_list args);

#endif
