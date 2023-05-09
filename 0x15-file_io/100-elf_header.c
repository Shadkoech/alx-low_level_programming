#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  *check_elf - Determines if a file of ELF type
  *@e_ident: pointer to ELF data
  *
  *Return: nothing
  */
void check_elf(unsigned char *e_ident)
{
	int count;

	for (count = 0; count < 4; count++)
	{
		if (e_ident[count] != 127 &&
				e_ident[count] != 'E' &&
				e_ident[count] != 'L' &&
				e_ident[count] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}


/**
  *print_magic - function printing out numbers in ELF header
  *@e_ident: pointer to array holding ELF magic numbers
  *
  *Return: nothing 0
  */
void print_magic(unsigned char *e_ident)
{
	int count;

	printf("  Magic:   ");

	for (count = 0; count < EI_NIDENT; count++)
	{
		printf("%02x", e_ident[count]);

		if (count == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}


/**
  *print_class - A function that prints class of ELF header
  *@e_ident: pointer to array holding ELF class
  *
  *Return: nothing
  */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
  *print_data - Function printing data on an ELF header
  *@e_ident: pointer to ELF class
  *
  *Return: Nothing
  */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
  *print_version - function printing out the ELF version
  *@e_ident: pointer to data holding ELF version
  *
  *Return: Nothing
  */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;

	}
}


/**
  *print_osabi - program printing OSABI of an ELF
  *@e_ident: pointer to data holding ELF version
  *
  *Return: Nothing
  */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
  *print_abi - function printing ELF ABI version
  *@e_ident: pointer to data holding ABI version
  *
  *Return: nothing
  */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
  *print_type - prints ELF type
  *@e_type: type of elf
  *@e_ident: pointer to ELF class
  */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}


/**
  *print_entry - prints an ELF entry point
  *@e_entry: ELF entry point address
  *@e_ident: pointer to ELf data class
  *
  *Return: nothing
  */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
  *close_elf - closes ELF file
  *@elf: the elf file descriptor
  *
  *Return: nothing
  */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
  *main - Diplays info held in an ELF header
  *@argc: number of arguments supplied
  *@argv: pointer array to arguments
  *
  *Return: 0 on success, -1 on failure
  */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int r, o;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	h =  malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, h, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(h);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	free(h);
	close_elf(o);
	return (0);
}
