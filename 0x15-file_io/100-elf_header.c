#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header_info - Entry point
 * Description: 'program.'
 * @header: argument
 * Return: result
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("Magic:   %c%c%c%c %c%c%c%c %c%c%c%c\n",
		header->e_ident[EI_MAG0], header->e_ident[EI_MAG1],
		header->e_ident[EI_MAG2], header->e_ident[EI_MAG3],
		header->e_ident[EI_MAG4], header->e_ident[EI_MAG5],
		header->e_ident[EI_MAG6], header->e_ident[EI_MAG7]
	);

	printf("Class:   ");
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("32-bit\n");
	}
	else
	{
		printf("64-bit\n");
	}

	printf("Data:    ");
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("Little-endian\n");
	}
	else
	{
		printf("Big-endian\n");
	}

	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type:    %d\n", header->e_type);

	printf("Entry point address: %p\n", (void *)header->e_entry);
}

/**
 * main - Entry point
 * Description: 'program.'
 * @argc: argument
 * @argv: argument
 * Return: result
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	const char *elf_f = argv[1];
	int fd = open(elf_f, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", elf_f);
		return (98);
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %s\n", elf_f);
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", elf_f);
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);
	close(fd);
	return (0);
}
