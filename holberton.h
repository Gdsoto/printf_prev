#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


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
/*int printint(va_list params);*/
#endif /* HOLBERTON_H */
