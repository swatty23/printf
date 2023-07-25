#include "main.h"

/**
 * get_width - Calculates the width to be printed
 * @format: formatted string in which the argument is to be printed
 * @i: List of arguments that should be printed.
 * @list: the list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int k;
	int wid = 0;

	for (k = *i + 1; format[k] != '\0'; k++)
	{
		if (is_digit(format[k]))
		{
			wid *= 10;
			wid += format[k] - '0';
		}
		else if (format[k] == '*')
		{
			k++;
			wid = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = k - 1;

	return (wid);
}
