#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - prints anything
 * @format: type of specifier being used
 * Return: count
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				return (-1);
			if (*format == 'c')
				count += print_char(args);
			else if (*format == 's')
				count += print_str(args);
			else if (*format == '%')
				count += _putchar('%');
			else if (*format == 'i' || *format == 'd')
			{
				int num = va_arg(args, int);

				print_number(num, &count);
			}
			else /*invalid specifier */
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
