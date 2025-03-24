#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *
*/
int _printf(const char *format, ...)
{
	int i, j, len = 0/*keep track of the num of characters printed*/;
	va_list args;
	va_start(args, format);
	
	/*loop through the format string*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/*if the '%' is encountered*/
		if (format[i] == '%')
		{
			i++;/*then go to the next position after '%'*/
			if (format[i] == 's')
			{
				/*str arguement*/
				char* str = va_arg(args, char*);
				for (j = 0; str[j] != '\0'; j++)/*loop through the string*/
				{
					_putchar(str[j]);
					len++;/*update len with the number of chars printed*/
				}
			}
			if (format[i] == 'c')
			{
				/*char arguement*/
				char c = (char) va_arg(args, int);
				_putchar(c);
			}
			if (format[i] == '%')
			{
				_putchar('%');/*simply print '%'*/
			}
		}
		else
		{
			/*just print the regular string*/
			_putchar(format[i]);
			len++; /*keep track of the number of chars printed*/
		}
	}
	va_end(args);/*clean up*/
	return (len);/*return total len of every char printed*/
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
