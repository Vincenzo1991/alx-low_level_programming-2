#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string added at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int lng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lng = 0; text_content[lng];)
			lng++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, lng);

	if (op == -1 || wr == -1)
		return (-1);

	close(0);

	return (1);
}
