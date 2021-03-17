#include "holberton.h"
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

