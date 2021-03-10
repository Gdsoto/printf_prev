#include "holberton.h"

/**
 * _printf - alternative function to printf().
 * @format: string of entry
 * Return: length
 */
int _printf(const char *format, ...)
{
	va_list params;

	int length = 0;
	int size = 0;
	int i;

	va_start(params, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			size = validate_param(format, params, i);
			if (size == 0)
			{
				if (format[i] == '%' && (format[i + 1] != 'c') && (format[i + 1] != 's'))
				{
					write(1, &format[i], 1);
					length++;
				}
				else
				{
					i++;
				}
			}
			else
			{
				i++;
			}
			length = size + length;
		}
		else
		{
			write(1, &format[i], 1);
			length++;
		}
	}
	va_end(params);
	return (length);
}
