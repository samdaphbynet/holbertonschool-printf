#include "main.h"

/**
 * specifiers - print an arguement
 * @format: formated string in which to print the argument
 * Return: NULL
 */

int (*specifiers(const char *format))(va_list)
{
	int i = 0;
	print_t array[] =
	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_pc},
		{'\0', NULL}
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
