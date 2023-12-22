#include "shell.h"

/**
 * copy_string - copies a string
 * @source: the source of the string
 *
 * Return: Destination
 */
char *copy_string(const char *source)
{
	size_t len = strlen(source) + 1;
	char *destination = (char *)malloc(len);

	if (destination != NULL)
	{
		strcpy(destination, source);
	}
	else
	{
		perror("Memory Allocation Failed");
	}

	return (destination);
}
