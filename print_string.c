#include "main.h"

/**
 *
 *
 *
 */

int print_string(va_list args)
{
	const char *str;

	str = va_arg(args, char *);

	while (*str)
	{
		putchar(*str);
		str++;
	}
	return (0);
}
