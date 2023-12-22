#include "shell.h"

void execute_command(const char *command, char *const arguments[])
{
	int status;
	int exit_status;
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (child_pid == 0)
	{

		if (execve(command, arguments, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(child_pid, &status, 0);

		if (WIFEXITED(status))
		{
			exit_status = WEXITSTATUS(status);
			printf("Child process exited with status %d\n", exit_status);
		}
	}
}
