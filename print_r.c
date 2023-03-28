#include "main.h"

/**
 *
 *
 */

int print_r(va_list args)
{
	int i, size;
	const char *str;

	str = va_arg(args, const char *);

	size = strlen(str);

	for (i = size - 1; i >= 0; i--)
		putchar(str[i]);

	return (size);
}
