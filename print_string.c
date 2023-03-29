#include "main.h"

/**
 * print_string - write the function
 * @args: iunput a string
 * Return: 0
 */

int print_string(va_list args)
{
	char *str;
	char *oct = "(null)";

	str = va_arg(args, char *);

	if (str == NULL)
		return (write(1, oct, strlen(oct)));
	return (write(1, str, strlen(str)));
}
