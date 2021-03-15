#include "holberton.h"



int printchar(va_list params)
{
  char *c;
  c = va_arg(params, char*);
  write(1, &c, 1);
  return(1);
}


int printint(va_list params)
{
  int *n;
  int len;

  n = va_arg(params, int*);

  

  if (n >= 0)
      {
	write(1, &n, 4);
      }  
  return (1);
}
/**
int printstring(va_list params);
{
  
  return ();
}
*/
int printperc(void)
{
  
  write(1, "%", 1);
  return 1;
}

