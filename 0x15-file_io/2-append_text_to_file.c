#include "main.h"

/**
  *append_text_to_file - Function that appends text at the end of a file
  *@filename: is the name of the file to be appended
  *@text_content: the contents of the file to append
  *
  *Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
