#ifndef SHELL_H
#define SHELL_H

/**
 * struct Shell - shell
 *
 * @prompt: prompter
 */

struct Shell
{
	char prompt[100];
};

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>

void prompt_printer(struct Shell *myShell);
void tokenize(char *input);
char *copy_string(const char *source);
void execute_command(const char *command, char *const arguments[]);

#endif
