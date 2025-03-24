#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * main -  Task 0  _printf 
 * Return: 0
 */
 
 
 
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	return (0);
}

int _printf(const char *format, ...)
{
	int i, j;
	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
		if (format[i] == 'c')
		{
			char c = (char) va_arg(args, int);
			_putchar(c);
		}
		else if (format[i] == 's')
		{
			char* str = va_arg(args, char*);
			for (j = 0; str[j] != '\0'; j++)
			_putchar(str[j]);
		}
		else 
		{
			(format[i] == '%');
			char c = (char) va_arg(args, int);
			_putchar(c);
		}
		}
	}
	return(0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
