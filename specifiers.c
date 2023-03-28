#include "main.h"

/**
 *
 *
 *
 */

int (*specifiers(const char *format))(va_list)
{
	int i = 0;
	print_t array[5] =
	{
		{"c", print_char},
		{"d", print_lenght},
		{"s", print_string},
		{"r", print_r},
		{NULL, NULL}
	};

	for (i = 0; array[i].sp != NULL; i++)
	{
		if (*(array[i].sp) == *format)
		{
			return (array[i].f);
		}
	}
	return (NULL);
}
