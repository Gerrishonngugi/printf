#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Input string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count, i, tempcount;
	char c;

	i = count = tempcount = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				c = format[i];
				tempcount = conversionspecifier(c, ap);
				count += tempcount;
			}
		}
		i++;
	}
	va_end(ap);
	return (count);
}

/**
 * conversionspecifier - Determines the appropriate character
 * @c: Input character
 * @ap: Variadic list
 *
 * Return: Number of characters printed
 */
int conversionspecifier(char c, va_list ap)
{
	if (c == 'c')
		return (print_char(ap));
	if (c == 's')
		return (print_string(ap));
	if (c == 'd' || c == 'i')
		return (print_int(ap));
	if (c == 'b')
		return (print_bin(ap));
	return (0);
}

