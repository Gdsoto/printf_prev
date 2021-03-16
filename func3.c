#include "holberton.h"

/**
 * print_reverse - A utility function to reverse a string
 * @param: entry parameter
 * Return: len
 */
int print_reverse(va_list param)
{
	int len = 0, i;
	char *str;

	str = va_arg(param, char *);
	if (!str)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
