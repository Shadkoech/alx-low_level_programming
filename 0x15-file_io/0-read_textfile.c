#include "main.h"

/**
  *read_textfile - A function that read & prints a text to POSIX
  *@filename: A pointer name to the file to be handled
  *@letters: Count of letters to be read and printed
  *
  *Return: number of letter read, 0 if filename is NULL or unreadable
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);

	return (w);
}

