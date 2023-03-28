#ifndef PRINTF_H
#define PRINTF_H

/**
 *
 *
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *
 *
 *
 */

typedef struct print
{
	char *sp;
	int (*f)(va_list);
} print_t;

/**
 *
 *
 *
 */

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_pc(va_list args);

#endif
