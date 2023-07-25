#include "main.h"

/**
 * is_printable - checks if a character is printable
 * @c: Character to be checked
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ASCII which is  in hexadecimal code to buffer
 * @buffer: contains array of characters
 * @i: Index to start appending.
 * @ascii_code: ASCII code
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char values[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = values[ascii_code / 16];
	buffer[i] = values[ascii_code % 16];

	return (3);
}

/**
 * is_digit - checks and verifies if a char is a digit
 * @c: Character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - it Casts a number to the specified size
 * @num: the number to be casted.
 * @size: the number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - it Casts a number to the specified size
 * @num: the number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
