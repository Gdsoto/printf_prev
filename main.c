#include "holberton.h"

int main(void)
{

    int len, len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    printf("%c", len);
    printf("%%", len2);

    return 1;
}
