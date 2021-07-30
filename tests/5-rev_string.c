#include "holberton.h"
/**
 * _strlen - Return length of string
 * @s: param
 * Description: String to be passed in
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i, string_len;

	char *string = s;  /* copy string stored from point */

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != '\0')
			continue;
		else
			break;
	}
	string_len = i;

	return (string_len);
	return (0);
}
/**
 * rev_string - updates and reverses a string
 * @s: param
 * Description: string to be reversed
 */
void rev_string(char *s)
{
	int i, r, len; /* i -> index, r -> reversed, len -> length */

	char *string = s;

	char rev;

	len = _strlen(string);
	i = len;
	for (i--, r = 0; r < len / 2; i--, r++)
	{
		rev = s[r];
		s[r] = s[i];
		s[i] = rev;
	}
}
