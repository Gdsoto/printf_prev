#include "holberton.h"

/**
 * toOct - A utility function to convert a octal
 * @num: entry parameter
 * @i: entry parameter
 * Return: len
 */
int toOct(unsigned int num, int i)
{
	int len = 0;

	if (num)
	{
		len = toOct(num / 8, i);
		_putchar((num % 8) + '0');
	}
	len = len + i;
	return (len);
}


/**
 * printoct - A utility function to convert a octal
 * @param: entry parameter
 * Return: len
 */
int printoct(va_list param)
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
	len = toOct(abs, 1);
	len--;
	return (len);
}
/**
* print_oct - prints a octal
* @param: list of parameters
* Return: oct
*/

int print_oct(va_list param)
{
unsigned int num = va_arg(param, int);
int oct = 0;
int i = 1, len = 0;

while (num != 0)
{
oct += (num % 8) * i;
num /= 8;
i *= 10;
len++;
}
oct--;
return (oct);
}
/**
* print_oct - prints a octal
* @param: list of parameters
* Return: oct
*/

int print_hex(va_list param)
{
unsigned char dec = va_arg(param, int);
int hexa = 0, len = 0;
char hex;
if ( dec < 1)
return (-1);

for (dec = 0; dec <= 9; dec++)

}
