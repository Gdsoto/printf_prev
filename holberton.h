#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/*Functions*/
int _printf(const char *format, ...);

typedef struct optype
{
  char *optype;
  int (*func)(int i, int j);
} optype_t;


#endif /* HOLBERTON_H */
