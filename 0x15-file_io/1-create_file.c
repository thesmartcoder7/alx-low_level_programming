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

int create_file(const char *filename, const char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	FILE *fp = fopen(filename, "w");

	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}

	fclose(fp);
	return (0);
}
