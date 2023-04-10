#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function reads a text file and prints
 *				   it to POSIX stdout.
 *
 * @filename: the pointer input parameter to the name of the file.
 * @letters: the number of letters to be read and printed.
 *
 * Return: (0) if unsuccessful or gets a NULL filename . . . else . . .
 *			 actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t sm_read_check, sm_count;
	char *text;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		free(text);
		return (0);
	}

	sm_read_check = read(file, text, letters);
	if (sm_read_check == -1)
		return (0);

	sm_count = write(STDOUT_FILENO, text, sm_read_check);
	if (sm_count == -1 || sm_read_check != sm_count)
		return (0);

	free(text);
	close(file);

	return (sm_count);
}
