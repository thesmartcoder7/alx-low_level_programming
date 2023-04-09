#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file.
 *
 * @filename: this is a pointer to the name of the file.
 * @text_content: this is the string to be added at the end of the file.
 *
 * Return:	(1) if execution is successful.
 *			(-1) if the execution fails or filename is NULL.
 *			(-1) if the file does not exist or the user lacks write permissions.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int sm_o, sm_w, sm_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sm_len = 0; text_content[sm_len];)
			sm_len++;
	}

	sm_o = open(filename, O_WRONLY | O_APPEND);
	sm_w = write(sm_o, text_content, sm_len);

	if (sm_o == -1 || sm_w == -1)
		return (-1);

	close(sm_o);

	return (1);
}
