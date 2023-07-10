#include "main.h"

/**
  *append_text_to_file - function that appends a text at the end of a file
  *@filename: name pointer of the file
  *@text_content: Null-terminated string to add at end of file
  *
  *Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t w;

	length = 0;

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

