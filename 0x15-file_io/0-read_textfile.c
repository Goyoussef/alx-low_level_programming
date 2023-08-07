#include "main.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 *
 * Return: If filename is NULL, the file cannot be opened or read, or
 * write fails or returns an unexpected number of bytes, return 0.
 * Otherwise, return the actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t br_read;
	ssize_t br_written;
	int lf;

	if (!(filename && letters))
		return (0);

	lf= open(filename, O_RDONLY);
	if (lf== -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	br_read = read(lf, buffer, letters);
	close(lf);

	if (br_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!br_read)
		br_read = letters;

	br_written = write(STDOUT_FILENO, buffer, br_read);
	free(buffer);

	if (br_written < 0)
		return (0);

	return (br_written);
}
