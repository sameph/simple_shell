#include "main.h"
/**
**shell_env - prints environment
**Return: nothing
**/

	int shell_env(void)
	{
		unsigned int i;

		i = 0;
		while (environ[i] != NULL)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
			i++;
		}
		return (0);
	}