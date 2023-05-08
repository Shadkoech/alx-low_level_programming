#include "main.h"
#include <stdlib.h>

/**
  *read_textfile - Function that reads and prints a text file to POSIX
  *@filename: pointer to name of the file to be handled
  *@letters: the count of letters to be read and print
  *
  *Return: 0 if filename is null or file is unreadable
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
