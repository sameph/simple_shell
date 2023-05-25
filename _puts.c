#include "main.h"

/**
 * _puts - prints a string without a \n
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	unsigned int len;

	len = _strlen(str);

	write(STDOUT_FILENO, str, len);
}
