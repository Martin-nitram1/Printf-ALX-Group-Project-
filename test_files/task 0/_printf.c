#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  *_printf - produces output according to format
  *@*format: initial parameter
  *
  *Return: number of characters printed excluding
  *terminating byte
  */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int count = 0;
	const char *fmt;
	char *str;

	va_start( ap, format);

	for (fmt = format; *fmt != '\0'; fmt++)
	{
		if (*fmt != '%')
		{
			_putchar(*fmt);
			count++;
		}
		else
		{
			fmt++;
			switch (*fmt)
			{
				case 'c' :
					_putchar(va_arg(ap, int));
							fmt++;
							count++;
							break;
				case 's':
					str = va_arg(ap, char *);

					if (str == NULL)
						str = "NULL";
					while (*str)
					{
						_putchar(*str);
						str++;
						count++;

					}
					break;
				case '%':
					_putchar ('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar(*fmt);
					fmt += 2;
					break;

			
			}
		}
	}
			va_end(ap);
			return (count);
}
