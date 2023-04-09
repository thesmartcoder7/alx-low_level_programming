#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function copies info from file_from to file_to.
 *
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: 0.
 */

int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t  sm_read = 1024, sm_write, sm_close;
	char content[1024];

	if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98); }

	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }

	while (sm_read == 1024)
	{
		sm_read = read(file_from, content, 1024);
		if (sm_read == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		sm_write = write(file_to, content, sm_read);
		if (sm_write == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}

	sm_close = close(file_from);
	if (sm_close == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", file_from);
		exit(100); }

	sm_close = close(file_to);
	if (sm_close == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", file_to);
		exit(100); }
	return (0);
}
