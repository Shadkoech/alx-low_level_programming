#include "main.h"

/**
  *create_file - This is a function that creates a file
  *@filename: Name pointer to the file to be created
  *@text_content: contents to be written into a file
  *
  *Return: 1 on success and (-1) on failure
  */
int create_file(const char *filename, char *text_content)
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

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
