#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *
*/
int print_char(va_list arg)
{
	int count = 0;
	int c;
	c = va_arg(arg, int);
	_putchar(c);
	count++;
	return (count);
}
/**
 *
*/
int print_str(va_list arg)
{
	char *s = va_arg(arg, char*);
	int count = 0;
	
	while(s[count])
	{
		_putchar(s[count]);
		count++;
	}
	return(count);
}
/**
 *
*/
void print_number(int n, int *count)
{
	if (n < 0)
	{
		_putchar('-');
		(*count)++;
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10, count);
	}
	_putchar((n % 10) + '0');
	(*count)++;
}
