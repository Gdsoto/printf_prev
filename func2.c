#include "holberton.h"

/**
 * printchar - prints a char
 * @params: list of parameters
 * Return: 1
 */
int printchar(va_list params)
{
	unsigned int len = 0;
	char *c;

	c = va_arg(params, char *);
	write(1, &c, 1);
	len++;
	return (len);
}

/**
 * printstring - prints a string
 * @param: list of parameters
 * Return: len
 */
int printstring(va_list param)
{
	unsigned int i, len = 0;
	char *str;

	str = va_arg(param, char *);
	if (!str)
		str = "(null)";
	for (i = 0; str[i] != 0; i++)
	{
		write(1, &str[i], 1);
		len++;
	}
	return (len);
}

/**
 * printperc - print a %.
 * Return: 1
 */
int printperc(void)
{
	write(1, "%", 1);
	return (1);
}
