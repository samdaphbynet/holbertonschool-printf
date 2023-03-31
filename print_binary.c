#include "main.h"

/**
 * print_binary - function that converted to binary.
 * @args: argument passed in function _printf
 * Return: number converted
 */

int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char binary[32];
	int i = 0, count = 0, j = 0;

	if (n == 0)
	{
		count += write(1, "0", 1);
		return (-1);
	}

	else
	{
		while (n > 0)
		{
			binary[i++] = n % 2 + '0';
			n /= 2;
		}

		for (j = i-1; j >= 0; j--)
		{
			count += write(1, &binary[j], 1);
		}
	}

	return (count);
}
