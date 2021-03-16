#include "holberton.h"

int main(void)
{
	int len, len2;

	len = _printf("%c", 'f');
	len2= printf("%c", 'f');
	
	printf("%d", len);
	printf("%d", len2);

	return (1);
}
