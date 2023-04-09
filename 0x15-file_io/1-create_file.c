#include "main.h"

/**
 * create_file - this function basically creates a file.
 *
 * @filename: this is a pointer to the name of the file to be created.
 * @text_content: this is a pointer to a string to write to the file
 *				that has just been created.
 *
 * Return: (1) if successful . . . else . . . (-1).
 */

int create_file(const char *filename, char *text_content)
{
	int sm_o, sm_w, sm_len = 0;

	if (text_content != NULL)
	{
		for (sm_len = 0; text_content[sm_len];)
			sm_len++;
	}

	if (filename == NULL)
		return (-1);

	sm_o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	sm_w = write(sm_o, text_content, sm_len);

	if (sm_o == -1 || sm_w == -1)
		return (-1);

	close(sm_o);

	return (1);
}
