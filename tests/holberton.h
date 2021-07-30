#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int iprint(char *str, int len);

void rev_string(char *s);

char *_strcpy(char *dest, char *src);

int _putchar(char c);

int _atoi(char *s);

char * _itoa(int i, char *strout, int base);

int _printf(const char *format, ...);

#endif
