#include "main.h"

/**
 * get_size - it calculates the size to pass to the argument
 * @format: Formatted string in which argument is to be printed
 * @i: argument list to print
 *
 * Return: size
 */
int get_size(const char *format, int *i)
{
	int k = *i + 1;
	int si = 0;

	if (format[k] == 'l')
		si = S_LONG;
	else if (format[k] == 'h')
		si = S_SHORT;

	if (si == 0)
		*i = k - 1;
	else
		*i = k;

	return (si);
}
