#include "shell.h"

/**
 * tokenize - Tokenizer
 *
 * @input: tokens to tokenize
 */
void tokenize(char *input)
{
	char *toks = strtok(input, " \t\n");

	while (toks != NULL)
	{
		toks = strtok(NULL, " \t\n");
	}
}
