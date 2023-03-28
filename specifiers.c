#include "main.h"

/**
 *
 *
 *
 */

int (*specifiers(const char *format)(va_list))
{
	print_t array[4] =
	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_pc},
		{NULL, NULL}
	};

	for (i = 0; array[i].sp != NULL; i++);
	{
		if (*(array[i].sp) == *format)
		{
			return (array[i].f);
		}
	}
	return (NULL);
}
