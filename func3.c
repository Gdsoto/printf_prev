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

/**
 * print_Rot - A utility function to convert a Rot13
 * @param: entry parameter
 * Return: len
 */
int print_Rot(va_list param)
{
	int j, i, len = 0;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;

	str = va_arg(param, char *);
	if (!str)
		return (0);
	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; letters[j] != 0; j++)
		{
			if (str[i] == letters[j])
			{
				_putchar(rot13[j]);
				len++;
				break;
			}
		}
	}
	return (len);
}

/**
 * toBinary - A utility function to convert a binary
 * @num: entry parameter
 * @i: entry parameter
 * Return: len
 */
int toBinary(unsigned int num, int i)
{
	int len = 0;

	if (num)
	{
		len = toBinary(num / 2, i);
		_putchar((num % 2) + '0');
	}
	len = len + i;
	return (len);
}


/**
 * printBinary - A utility function to convert a binary
 * @param: entry parameter
 * Return: len
 */
int printBinary (va_list param)
{
	unsigned int abs = 0;
	int len = 0, num = 0;

	num = va_arg(param, int);
	if (num < 1)
	{
		_putchar('0');
		return (1);
	}
	abs = num;
	len = toBinary(abs , 1);
	len--;
	return (len);
}