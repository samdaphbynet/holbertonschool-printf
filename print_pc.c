#include "main.h"

/**
 *
 *
 */

int print_pc(va_list args)
{
	char cent = '%';
	(void) args;

	return (write(1, &cent, 1));
}
