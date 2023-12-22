#include "shell.h"

/**
 * main - ENtry
 *
 * Return: 0
 */
int main(void)
{
	struct Shell myShell;

	while (1)
	{
		prompt_printer(&myShell);
	}
	return (0);
}
