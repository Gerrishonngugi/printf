#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print a character to std output
 * @c: character to print
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
