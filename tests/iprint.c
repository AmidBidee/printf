#include "holberton.h"
/**
 * iprint - iterates and prints through a char string
 * @len: lenght of string
 * @str: string
 *
 * Return: 0
 */

int iprint(char *str, int len)
{
	int i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (0);
}
