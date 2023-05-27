#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>

/**
  *errorprint - prints a message to the stderr
  *@msg:pointer to the error message to be printed
  */
void errorprint(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

 /**
   *magic_comparison - compares ELF magic bytes to those expected
   *@expected: the expected magic bytes
   *Return: 0 if same and 1 if different
   */
int magic_comparison(const unsigned char *magic, const char *expected)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		if (magic[i] != expected[i])
			return (1);
	}

	return (0);
}

/**
  *head_reader - reads the ELF header from file descriptor
  *@fd: the file descriptor to the elf file
  *@header: a pointer to Elf64_Ehdr structure
  *Return: 0 on success
  */

int head_reader(int fd, Elf64_Ehdr *header)
{
	if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		return (1);

	return (0);
}

/**
  *headerinfo_display - display info held in the ELF header
  *@header: a pointer to Elf64_Ehdr structure
  *
  *Return: void
  */

void headerinfo_display(const Elf64_Ehdr *header)
{
	int x;

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x ", header->e_ident[x]);
	}
	printf("\n");

	printf("  Class:                             ");
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (header->e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("Invalid class\n");
	}

	printf("  Data:                              ");
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else
	{
		printf("Invalid data encoding\n");
	}

	printf("  Version:                           %d", header->e_ident[EI_VERSION]);

	if (header->e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}

	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - Tru64\n");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;

		default:
			printf("Unknown\n");
			break;
	}

	printf("  Type:                              %u", header->e_type);
	switch (header->e_type) 
	{
		case ET_NONE:
			printf(" (No file type)\n");
			break;
		case ET_REL:
			printf(" (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf(" (Executable file)\n");
			break;
		case ET_DYN:
			printf(" (Shared object file)\n");
			break;
		case ET_CORE:
			printf(" (Core file)\n");
			break;
		default:
			printf(" (Unknown file type)\n");
			break;
	}

	printf("  Machine:                           %u", header->e_machine);

	switch (header->e_machine)
	{
		case EM_NONE:
			printf(" (No machine)\n");
			break;
		case EM_386:
			printf(" (Intel 80386)\n");
			break;
		case EM_X86_64:
			printf(" (AMD x86-64 architecture)\n");
			break;
		case EM_ARM:
			printf(" (ARM)\n");
			break;
		case EM_AARCH64:
			printf(" (AArch64)\n");
			break;
		default:
			printf(" (Unknown machine)\n");
			break;
	}

	printf("  Version:                           %u\n", header->e_version);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
	printf("  Start of program headers:          %lu (bytes into file)\n", header->e_phoff);
	printf("  Start of section headers:          %lu (bytes into file)\n", header->e_shoff);
	printf("  Flags:                             0x%x\n", header->e_flags);
	printf("  Size of this header:               %u (bytes)\n", header->e_ehsize);
	printf("  Size of program headers:           %u (bytes)\n", header->e_phentsize);
	printf("  Number of program headers:         %u\n", header->e_phnum);
	printf("  Size of section headers:           %u (bytes)\n", header->e_shentsize);
	printf("  Number of section headers:         %u\n", header->e_shnum);
	printf("  Section header string table index: %u\n", header->e_shstrndx);
}

/**
  *main- Entry point, check if correct command arg are entered
  *@argc: number of command-line arguments passed 
  *@argv: array of strings that hold the arguments
  *
  *Return: 0 prompt successfully executed, error 1
  */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	unsigned char magic[EI_NIDENT];
	Elf64_Ehdr header;

	if (argc != 2)
	{
		errorprint("Usage: ./readelf <filename>");
	}

	filename = argv[1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		errorprint("Failed to open the file.");
	}

	if (read(fd, magic, EI_NIDENT) != EI_NIDENT)
	{
		errorprint("Failed to read the ELF magic bytes.");
	}

	if (magic_comparison(magic, ELFMAG) != 0)
	{
		errorprint("Not an ELF file.");
	}

	if (head_reader(fd, &header) != 0)
	{
		errorprint("Failed to read the ELF header.");
	}

	headerinfo_display(&header);

	close(fd);

	return (0);
}



























			

































