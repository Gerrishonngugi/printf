#ifndef PRINTF_H
#define PRINTF_H

#include <stddef.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int conversionspecifier(char, va_list);


int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
void print_num(int);
int print_bin(va_list);
#endif
