#include "main.h"

/**
 *
 *
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int len = 0, count = 0;
	char buffer[100];

	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	do
	{
		buffer[len] = (num % 10) + '0';
		num /= 10;
		len++;
	} while (num > 0);
	if (len == 0)
	{
		buffer[len] = '0';
		len++;
	}

	buffer[len] = '\0';
	str_rev(buffer);
	fputs(buffer, stdout);
	count += len + '\0';

	return (count);
}
