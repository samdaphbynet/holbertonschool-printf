#include "main.h"

/**
 *
 *
 */
void print(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	putchar((n % 10) + '0');
}
/**
 *
 *
 */


int print_int(va_list args)
{
	printf("#");
	(void)args;
	return 0;
}
