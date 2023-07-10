#include "main.h"

/**
  *f_close - closes a given file descriptor
  *@fd: the file descriptor to be closed
  */
void f_close(int fd)
{
	int fc;

	fc = close(fd);

	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  *buf_creator - Function that allocates memory to buffer
  *@filename: name pointer of the file whose contents are stored in buffer
  *Return: pointer to buffer
  */
char *buf_creator(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
  *main - program that copy content of one file to another
  *@argc: Arguments passed to the function
  *@argv: Array of argument pointers passed
  *
  *Return: Always 0, on success
  */

int main(int argc, char *argv[])
{
	int from, to, rd, wt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buf_creator(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wt = write(to, buff, rd);
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	f_close(from);
	f_close(to);
	return (0);
}
