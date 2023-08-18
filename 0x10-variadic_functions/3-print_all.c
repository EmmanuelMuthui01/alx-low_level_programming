#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char ch;

	va_list my_list;

	va_start(my_list, format);

	while (format && format[i])
	{
		ch = format[i];
		switch (ch)
		{
			case 'c':
				printf("%c", va_arg(my_list, int));
				break;
			case 'i':
				printf("%d", va_arg(my_list, int));
				break;
			case 'f':
				printf("%f", va_arg(my_list, double));
				break;
			case 's':
				str = va_arg(my_list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(my_list);
}
