#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - function that copies contents of one file into another
  *@argc: number of aguments passed
  *@argv: an array of the passed arguments
  *
  *Return: 0 on success
  */
int main(int argc, char *argv[])
{
	FILE *fp_src, *fp_dest;
	char buffer[1024];
	size_t r, w;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_src = fopen(argv[1], "rb");
	if (!fp_src)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_dest = fopen(argv[2], "wb");
	if (!fp_dest)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		fclose(fp_src);
		exit(99);
	}
	while ((r = fread(buffer, 1, sizeof(buffer), fp_src)))
	{
		w = fwrite(buffer, 1, r, fp_dest);
		if (w < r)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			fclose(fp_src);
			fclose(fp_dest);
			exit(99);
		}
	}
	fclose(fp_src);
	fclose(fp_dest);

	return (0);
}
