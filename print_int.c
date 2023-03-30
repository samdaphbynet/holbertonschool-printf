#include "main.h"

/**
 *
 *
 */

int print(char *str)
{
	int i;

	for (i = 2; str[i] != '\0'; ++i)
		putchar(str[i]);

	return (i);
}

/**
 *
 *
 */

int print_int(va_list args)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(args, int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
