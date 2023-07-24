#include "main.h"
#include <unistd.h>

/**
  *_putchar: outputs a char to stdout
  *@c: character to output
  *
  *Return: 0 if  success
  */
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
				case 'i':
				case 'd':
					{
					int num;
					int temp;
					int digits = 0;
					int pv = 1;
					int i;
					int pos;

					num = va_arg(ap, int);
					temp = num;

					if (num == 0)
					{
						_putchar('0');
						count++;
					}
					if (num < 0)
					{
						_putchar('-');
						num = -num;
					}
					else
					{
						while (temp != 0)
						{	
							temp /= 10;
							digits++;
						}
						for (i = 1; i < digits; i++)
						{
							pv *= 10;
						}
						while (pv != 0)
						{
							 pos = num / pv;
							_putchar(pos + '\0');
								count++;
							num %= pv;
							pv /= 10;
						}	
					}
					}
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
