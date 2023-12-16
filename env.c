#include "shell.h"

/**
 * main - Entry of program
 *
 * @env - function to list envioment variables
 */
int main(int arc, char **arv, char **env)
{
	int shhel = 0;
	(void) arc;
	(void) arv;

	while (env[shhel])
	{
		write(1, env[shhel], strlen(env[shhel]));
		write(1, "\n", 1);
		shhel++;
	}
	return (0);
}
