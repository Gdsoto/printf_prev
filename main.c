#include "holberton.h"
 #include <limits.h>
int main(void)
{
  int alen, elen;
  char c = 'z';
  char *str = NULL;
  printf("START OF TEST\n");
  printf("=====================\n");
  str = "hello, world";
  printf("=====================\n");
  printf("*****CHAR*****\n");
  printf("=====================\n");
  printf("Expected   : %c\n", 'a');
  _printf("Actual     : %c\n", 'a');
  elen = printf("Expected   : %c\n", c);
  alen = _printf("Actual     : %c\n", c);
  printf("Expected   : %i\n", elen);
  printf("Actual     : %i\n", alen);
  printf("Expected   : %cc\n", 'a');
  _printf("Actual     : %cc\n", 'a');
  printf("Expected   : %c\n", 365);
  _printf("Actual     : %c\n",365);
  printf("Expected   : %o\n", 365);
  _printf("Actual     : %o\n",365);
  printf("=====================\n");
  printf("*****STRINGS*****\n");
  printf("=====================\n");
  alen = elen = 0;
  printf("Expected   : %s\n", "holberton");
  _printf("Actual     : %s\n", "holberton");
  printf("Expected   : %s$\n", "");
  _printf("Actual     : %s$\n", "");
  elen = printf("Expected   : %s\n", str);
  alen = _printf("Actual     : %s\n", str);
  elen = printf("%s", "");
  alen = _printf("%s", "");
 
  printf("Expected: %d\n", elen);
  printf("Actual  : %d\n", alen);
  return (0);
}
