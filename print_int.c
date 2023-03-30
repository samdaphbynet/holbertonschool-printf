#include "main.h"

/**
 *
 *
 */

int _write(char c)
{
	return (write(1, &c, 1));
}

void _recursion_integer(int a)
{
        unsigned int t;

        t = a;
        if (t / 10)
                _recursion_integer(t / 10);
        _write(t % 10 + '0');
}

int print_int(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		_write('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	_recursion_integer(m);
	return (count);
}
