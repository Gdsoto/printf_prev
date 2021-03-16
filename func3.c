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
