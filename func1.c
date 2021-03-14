#include "holberton.h"

int validate_param(const char *format, va_list param, int i)
{
  optype_t ops[] = {
      {'c', op_char},
      {'d', op_int},
      {'i', op_int},
      {'s', op_float},
      {'%', op_perc}};

  int size = 0, j = 0;

  while (j <= 4)
  {
    if (format[i + 1] == ops[j].type[0])
    {
      size = ops[j].func(param);
    }
    j++;
  }
  return (size);
}