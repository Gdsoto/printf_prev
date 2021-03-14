#include "holberton.h"




int printoptions(char* fotmat, ...)
{
  va_list args;
  char *str;
  unsigned int i;
  char *s;

  va_start(args, format);
  for(str = format; *str != '\0'; str++)
    {
      while (*str != '%')
	{
	  putchar(*str);
	  str++;
	}
      str++;

      switch(*str)
	{
	case 'c': i = va_arg(args, int);
	  putchar(i);
	  break;
	
	case 'd': i = va_arg(args, int);
	  if(i < 0)
	    {
	      i = -i;
	      putchar('-');
	    }
	  putchar(convert(i,10));
	  break;
	case 'i': i = va_arg(args, int);
	  if(i < 0)
	    {
	      i = -i;
	      putchar('-');
	    }
	  putchar(convert(i,10));
	  break;

	case 's': s = va_arg(args, char *);
	  puts(s);
	  break;
        }

  
}
}
