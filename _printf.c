#include "holberton.h"
/**
 * _printf - Print out formatted string to console
 * @format: formtted string
 * Return: Always 0
*/
int _printf(const char *format, ...)
{
	va_list vars;
	int i = 0, j = 0, index;
	char buffer[200] = {0};
	/* char tmp[20]; */
	char *str_arg;

	va_start(vars, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buffer[j] = (char)va_arg(vars, int);
					j++;
					break;
				case 's':
					str_arg = va_arg(vars, char*);
					strcpy(&buffer[j], str_arg);
					j += strlen(str_arg);
					break;
				case '%':
					buffer[j] = format[i];
                                        j++;
					break;
				default:
					--i;
					buffer[j] = format[i];
					j++;
					break;


			}
		}
		else
		{
			buffer[j] = format[i];
			j++;
		}
		i++;
	}

	for (index = 0; index < j; index++)
	{
		_putchar(buffer[index]);
	}
	va_end(vars);
	return (j);
}
