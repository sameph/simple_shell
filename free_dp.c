#include "main.h"
/**
 * free_dp - a function to free double pointer
 * @double_pointer: double pointer to free
 * @length: length of double pointer
 * Return: nothing
 */
void free_dp(char **double_pointer, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		free(double_pointer[i]);
		i++;
	}
	free(double_pointer);
}
