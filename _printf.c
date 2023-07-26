#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _printf - produces output according to format
 * @format: string containing the characters and the specifiers
 *
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list args;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			if (*p == '\0') 
				return (-1);

			while (get_flag(*p, &flags))
				p++;

			pfunc = get_print(*p);
			if (!pfunc) 
				return (-1);

			count += pfunc(args, &flags);
		}
		else
			count += _putchar(*p);
	}

	va_end(args);
	return (count);
}
