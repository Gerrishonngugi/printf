#include "main.h"

/**
 * print_bin - function to print binary number
 * @ap: variadic list
 *
 * Return: no. of characters printed
 */

int print_bin(va_list ap)
{
	int a[32], i, siz, n;

	n = va_arg(ap, int);
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n /= 2;
	}

	siz = i;

	for (i = i - 1; i >= 0; i--)
		_putchar(a[i] + '0');
	return (siz);
}
