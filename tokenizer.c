#include "main.h"

/**
 * tokenizer - tokenizes string
 * @str: user input
 * Return: pointer to array of tokens
 */
char **tokenizer(char *str)
{
	char **tokens = malloc(sizeof(char) * BUFFER);
	char *token;
	unsigned int i = 0;
	const char separator[] = "\n\t\r ";

	if (tokens == NULL)
	{
		errors(3);
		exit(EXIT_FAILURE);
	}

	token = strtok(str, separator);

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, separator);
		i++;
	}

	tokens[i] = NULL;

	return (tokens);
}
