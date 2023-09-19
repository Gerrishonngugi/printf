#include "main.h"

void print_num(int);
/**
 * print_char - function to print character
 * @ap: variadic list
 *
 * Return: no. of characters printed
 */

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - function to  print a string
 * @ap: variadic list
 *
 * Return: no. of characters printed
 */

int print_string(va_list ap)
{
	char *s;
	int i = 0;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		_printf("(null)");
		return (6);
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - function to print integer
 * @ap: variadic list
 *
 * Return: no. of characters printed
 */

int print_int(va_list ap)
{
	int num, i, count, num2;

	i = count = 0;
	num = va_arg(ap, int);
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
		count++;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	num2 = num;
	if (num > 0)
	{
		while (num2 > 0)
		{
			num2 /= 10;
			i++;
		}
	}
	print_num(num);
	count += i;
	return (count);
}

/**
 * print_num - prints a number
 * @n: number to print
 *
 * Return: nothing
 */

void print_num(int n)
{
	if (n / 10)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}
