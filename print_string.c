#include "main.h"

/**
 *
 *
 *
 */

int print_string(va_list args)
{
	char *str;
	int string = 0;

	str = (char)va_arg(args, char *);

	if (str)
	{
		string = write(1, &str, 1)
		return string;
	}
	return (0);
}
