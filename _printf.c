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
    int i;

    va_start(params, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            // aqui iria codigo si hay despues una c, d, s
        }
        else
        {
            _putchar(format[i]);
            length++;
        }
    }

    va_end(params);
    return (length);
}