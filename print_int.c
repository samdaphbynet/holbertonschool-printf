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
		count++;
        }

	while (num > 0)
	{
		buffer[len] = (num % 10) + '0';
		num /= 10;
		len++;
	}
	if (len == 0)
	{
		buffer[len] = '0';
		len++;
	}

	buffer[len] = '\0';
	str_rev(buffer);
	write(1, buffer, strlen(buffer));	
	count += len;

	return (count);
}
