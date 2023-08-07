#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>

void print_ident_magic(const unsigned char *e_ident)
{
	int i;
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

void print_basic_info(const Elf32_Ehdr *header) {
	printf("  Class:                             ELF");
	printf("%d\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("  Data:                              2's complement, ");
	printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "little endian" : "big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI]) {
	case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
	case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
	case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
	case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
	default: printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type) {
	case ET_NONE: printf("NONE (Unknown Type)\n"); break;
	case ET_REL: printf("REL (Relocatable file)\n"); break;
	case ET_EXEC: printf("EXEC (Executable file)\n"); break;
	case ET_DYN: printf("DYN (Shared object file)\n"); break;
	case ET_CORE: printf("CORE (Core file)\n"); break;
	default: printf("<unknown: %x>\n", header->e_type);
	}
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
	const char* file_path;
	int fd;
	Elf32_Ehdr header;

	if (argc != 2) {
		return 98;
	}

	file_path = argv[1];
	fd = open(file_path, O_RDONLY);
	if (fd == -1) {
		return 98;
	}

	if (read(fd, &header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
		fprintf(stderr, "Error: Failed to read ELF header from file: %s\n", file_path);
		close(fd);
		return 98;
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	            header.e_ident[EI_MAG1] != ELFMAG1 ||
	            header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "Error: Not an ELF file: %s\n", file_path);
		close(fd);
		return 98;
	}

	print_ident_magic(header.e_ident);
	print_basic_info(&header);

	close(fd);

	return 0;
}
