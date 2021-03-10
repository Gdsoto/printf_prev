#include "holberton.h"

/**
 * validate_param - validate the params to choose the datatype;
 * @format: string of entry
 * @param: list of parameters
 * @i: position of character in format
 * Return: size
 */
int validate_param(const char *format, va_list param, int i)
{
	optype_t ops[] = {
		{'c', printchar},
		{'s', printstring},
		{'%', printperc},
		{'\0', NULL}
	};

	int size = 0, j = 0;

	while (j <= 4)
	{
		if (format[i + 1] == ops[j].type)
		{
			size = ops[j].func(param);
		}
		j++;
	}
	return (size);
}
