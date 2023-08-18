#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 * i = int; c = char; f = float; s = char *;
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = ", ";
	va_list my_list;

	va_start(my_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", separator, va_arg(my_list, int);
				
				break;

				case 'i':
				printf("%s%c", separator, va_arg(my_list, int);
