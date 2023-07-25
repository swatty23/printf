#include "main.h"

/**
 * get_precision - Calculates the precision to  print
 * @format: formatted string in which argument is to be printed
 * @i: list of arguments to be printed.
 * @list: the list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int pre = -1;

	if (format[curr_i] != '.')
		return (pre);

	pre = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			pre *= 10;
			pre += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			pre = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (pre);
}
