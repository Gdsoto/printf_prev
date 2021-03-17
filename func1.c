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
		{'d', print_int},
		{'i', print_int},
		{'r', print_reverse},
		{'R', print_Rot},
		{'b', printBinary},
<<<<<<< HEAD
		{'x', print_hex},
=======
		{'o', printoct},
>>>>>>> 67df9b2f8cf4da194fc3fdad9c85637dff0a408c
		{'\0', NULL}
	};

	int size = 0, j = 0;

<<<<<<< HEAD
	while (j <= 9)
=======
	while (j <= 10)
>>>>>>> 67df9b2f8cf4da194fc3fdad9c85637dff0a408c
	{
		if (format[i + 1] == ops[j].type)
		{
			size = ops[j].func(param);
		}
		j++;
	}
	return (size);
}
