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
<<<<<<< HEAD
=======
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
unsigned int num = va_arg(param, int);
int i = 1;
char j = num;

if (num < 10)
{
for (num = 0; num <= 10;num++)
_putchar(num / 10 + '\0');
_putchar(num % 10 + '\0');
}
if (num >= 10 && num <=16)
{
	for(j= 'a'; j <= 'f'; j++)
	_putchar(j);
}


return (num);
}
>>>>>>> a1fa5fa0999e4b1279023bf6f507847f04652e4c

