#include "main.h"

/**
 * print_binary - function that converted to binary.
 * @args: argument passed in function _printf
 * Return: number converted
 */

int print_binary(va_list args)
{
	int n = va_arg(args, int);
	int binary[40];
	int i = 0, j = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return (-1);
	}

	for (; n > 0; )
	{
		binary[i++] = n % 2;
		n /= 2;
	}

	for (j = i-1; j >= 0; j--)
		_printf("%d", binary[j]);
	return (n);
}
