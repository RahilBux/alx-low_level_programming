#include <sys/types.h>
#include <elf.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void check_elf(unsigned char *ident);
void magic(unsigned char *ident);
void class(unsigned char *ident);
void data(unsigned char *ident);
void version(unsigned char *ident);
void osabi(unsigned char *ident);
void close_elf(int elf);
void entry(unsigned long int eentry, unsigned char *ident);
void type(unsigned int etype, unsigned char *ident);
void abi(unsigned char *ident);

/**
 * check_elf - check if file is an elf
 * @ident: a pointer to the elf numbers
 */

void check_elf(unsigned char *ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ident[i] != 127 &&
			ident[i] != 'E' &&
			ident[i] != 'L' &&
			ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - prints magic numbers
 * @ident: a pointer to elf numbers
 */

void magic(unsigned char *ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class - prints class of elf
 * @ident: a pointer to an array
 */

void class(unsigned char *ident)
{
	printf(" Class: ");

	switch (ident[EI_CLASS])
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
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * data - Prints the data
 * @ident: pointer to an array
 */

void data(unsigned char *ident)
{
	printf(" Data: ");

	switch (ident[EI_DATA])
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
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * version - Prints the version
 * @ident: a pointer to the array
 */

void version(unsigned char *ident)
{
	printf(" Version: %d", ident[EI_VERSION]);

	switch (ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;

		default:
			printf("\n");
			break;
	}
}

/**
 * osabi - Prints the os/abi
 * @ident: a pointer to an array
 */

void osabi(unsigned char *ident)
{
	printf(" OS/ABI: ");

	switch (ident[EI_OSABI])
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
			printf("Stanalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * abi - prints the abi version
 * @ident: a pointer to the array
 */

void abi(unsigned char *ident)
{
	printf(" ABI Version: %d\n", ident[EI_ABIVERSION]);
}

/**
 * type - prints the type
 * @etype: elf type
 * @ident: a pointer to the array
 */

void type(unsigned int etype, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		etype >>= 8;

	printf(" Type: ");

	switch (etype)
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
			printf("<unknown: %x>\n", etype);
	}
}

/**
 * entry - prints the entry point
 * @eentry: the address
 * @ident: a pointer to the array
 */

void entry(unsigned long int eentry, unsigned char *ident)
{
	printf(" Entry point address: ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		eentry = ((eentry << 8) & 0xFF00FF00) |
			((eentry >> 8) & 0xFF00FF);

		eentry = (eentry << 16) | (eentry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)eentry);

	else
		printf("%#lx\n", eentry);
}

/**
 * close_elf - closes the elf file
 * @elf: the file descriptor
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the info
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF HEADER:\n");
	magic(header->e_ident);
	class(header->e_ident);
	data(header->e_ident);
	version(header->e_ident);
	osabi(header->e_ident);
	abi(header->e_ident);
	type(header->e_type, header->e_ident);
	entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
