#include "holberton.h"

int validate_param(const char *format, va_list param, int i)
{
  optype_t ops[] = {
      {'c', printchar},
      
      // {'s', op_string},
      //{'%', op_perc},
      {'d', printint},
      {'i', printint},
      //{'b', op_bin},*/
      {'%', printperc},
      {'\0', NULL}
  };

  int size = 0, j = 0;

  while (j <= 4)
  {
    if (format[i + 1] == ops[j].type)
    {
      size = ops[j].func(param);
    }
    j++;
  }
  return (size);
}
