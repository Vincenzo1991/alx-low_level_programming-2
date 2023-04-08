#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX STDOUT
 * @letters: number of letters to read and print
 * @filename: the name of the file
 * Return: 8, if write fails, else number of letters to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t rd;
	ssize_t wr;
	char *bufr;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, bufr, letters);
	wr = write(STDOUT_FILENO, bufr, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(bufr);
		return (0);
	}

	free(bufr);
	close(op);

	return (wr);
}
