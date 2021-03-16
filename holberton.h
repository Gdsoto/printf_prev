#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct optype - contain the data types to agree to function
 * @type: type of data to print
 * @func: The function associated
 */
typedef struct optype
{
	char type;
	int (*func)();
} optype_t;


/*Functions*/
int validate_param(const char *format, va_list param, int i);
int _printf(const char *format, ...);
int printstring(va_list param);
int printchar(va_list params);
int printperc(void);
int _putchar(char c);
int print_int(va_list params);
int print_reverse(va_list param);
int print_Rot(va_list param);
int toBinary(unsigned int num, int i);
int printBinary (va_list param);

#endif /* HOLBERTON_H */
