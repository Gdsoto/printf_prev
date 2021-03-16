#include "holberton.h"

int main(void)
{
	int len, len2 = 0;

	len = _printf("Unknown:[%R]\n", "Hola");
	len2 = _printf("Unknown:[%r]\n", "Hola");
	
	printf("%d\n", len);
	printf("%d\n", len2);

	return (1);
}
