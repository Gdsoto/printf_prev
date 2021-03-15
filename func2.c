#include "holberton.h"

/**
 * printchar - prints a char
 * @param: list of parameters
 * Return: 1
 */
int printchar(va_list params)
{
  unsigned int len = 0;
  char *c;

  c = va_arg(params, char *);
  write(1, &c, 1);
  len++;
  return (len);
}

/**
 * printstring - prints a string
 * @param: list of parameters
 * Return: len
 */

int printstring(va_list param)
{
  unsigned int i;
  char *str;

  str = va_arg(param, char *);
  if (!str)
    str = "(null)";
  for (i = 0; str[i] != 0; i++)
  {
    write(1, &str[i], 1);
    
  }
  return (str[i]);
}

/**
 * printInt - print a int.
 * @param: entry parameter
 * Return: 1
 
int printint(va_list params)
{
  int *n;
  int len;

  n = va_arg(params, int *);

  if (n >= 0)
  {
    write(1, &n, 4);
  }
  return (1);
}*/

/**
 * printperc - print a %.
 * Return: 1
 */
int printperc(void)
{

  write(1, "%", 1);
  return 1;
}
