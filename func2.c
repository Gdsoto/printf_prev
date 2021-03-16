#include "holberton.h"

/**
 * printchar - prints a char
 * @param: list of parameters
 * Return: 1
 */
int printchar(va_list param)
{
	unsigned int len = 0;
	char *c;

	c = va_arg(param, char *);
	write(1, &c, 1);
	len++;
	return (1);
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
/**
 * print_int - print an integer
 * @param: list of parameters
 * Return: int
 */
int print_int(va_list param)
{
	int i, j, division = 1, number = va_arg(param, int), number2 = 0;
	unsigned int decimal = number, number3 = number;

	if (number >= 0 && number <= 9)
	{
		_putchar('0' + number);
	}
	else if (number < 0 && number >= -9)
	{
		number = -number;
		i++;
		_putchar('-');
		_putchar('0' + number);
	}
	else
	{
		if (number <= -10)
		{
			number = -number, number2 = 1;
			_putchar('-');
			number3 = number;
			decimal = number;
		}
		for (i = 1; decimal >= 10; i++)
			decimal = decimal / 10;
		for (j = i; j > 1; j--)
			division = division * 10;
		for (j = 1; j <= i; j++)
		{
			decimal = number3 / division;
			number3 = number3 - (decimal * division);
			division = division / 10;
			_putchar('0' + decimal);
		}
	}
	if (number2 == 1)
		return (i + 1);
	return (i);
}
