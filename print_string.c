#include "main.h"

/**
 * print_string - write the function
 * @args: iunput a string
 * Return: 0
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
