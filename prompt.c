#include "shell.h"

/**
 * prompt_printer - Prints a prompt for user
 * @myShell: This is my shell struct
 *
 * Return: Void
 */
void prompt_printer(struct Shell *myShell)
{
	char *buf_store = NULL;
	size_t buf_size = 0;
	ssize_t buf_rv;

	printf("%s", myShell->prompt);

	buf_rv = getline(&buf_store, &buf_size, stdin);

	if (buf_rv == -1)
	{
		free(buf_store);
		exit(1);
	}

	if (buf_rv > 0 && buf_store[buf_rv - 1] == '\n')
	{
		buf_store[buf_rv - 1] = '\0';
	}

	tokenize(buf_store);

	printf("%s", buf_store);

	free(buf_store);
}
