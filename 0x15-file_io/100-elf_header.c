#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void print_elf_magic(const unsigned char *buffer);
void print_elf_class(const unsigned char *buffer);
void print_elf_data(const unsigned char *buffer);
void print_elf_version(const unsigned char *buffer);
void print_elf_osabi(const unsigned char *buffer);
void print_elf_abivers(const unsigned char *buffer);
void print_elf_type(const unsigned char *buffer, int big_endian);
void print_elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian);

int main(int argc, const char *argv[])
{
	unsigned char buffer[18];
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error: Can't read from file");
		exit(98);
	}

	if (read(fd, buffer, 18) != 18)
	{
		fprintf(stderr, "Error: Can't read ELF header from file\n");
		close(fd);
		exit(98);
	}

	print_elf_magic(buffer);
	print_elf_class(buffer);
	print_elf_data(buffer);
	print_elf_version(buffer);
	print_elf_osabi(buffer);
	print_elf_abivers(buffer);
	print_elf_type(buffer, 0); /* Assume little endian */
	print_elf_entry(buffer + 24, buffer[EI_CLASS] == ELFCLASS64 ? 64 : 32, 0); /* Assume little endian */

	close(fd);

	return 0;
}

void print_elf_magic(const unsigned char *buffer)
{
	int i;

	if (memcmp(buffer, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < SELFMAG; ++i)
	{
		printf("%02x%c", buffer[i], i < SELFMAG - 1 ? ' ' : '\n');
	}
}

void print_elf_class(const unsigned char *buffer)
{
	printf("  %-34s ", "Class:");
	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else
	{
		printf("<unknown: %x>\n", buffer[EI_CLASS]);
	}
}

void print_elf_data(const unsigned char *buffer)
{
	printf("  %-34s ", "Data:");
	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else
	{
		printf("Invalid data encoding\n");
	}
}

void print_elf_version(const unsigned char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);
	if (buffer[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}

void print_elf_osabi(const unsigned char *buffer)
{
	const char *os_table[] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		        "Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");
	if (buffer[EI_OSABI] < sizeof(os_table) / sizeof(os_table[0]))
	{
		printf("%s\n", os_table[buffer[EI_OSABI]]);
	}
	else
	{
		printf("<unknown: %x>\n", buffer[EI_OSABI]);
	}
}

void print_elf_abivers(const unsigned char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}
void print_elf_type(const unsigned char *buffer, int big_endian)
{
	char *type_table[] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		        "CORE (Core file)"
	};

	unsigned int type;

	printf("  %-34s ", "Type:");

	if (big_endian)
	{
		type = buffer[16] << 8 | buffer[17];
	}
	else
	{
		type = buffer[17] << 8 | buffer[16];
	}

	if (type < sizeof(type_table) / sizeof(type_table[0]))
	{
		printf("%s\n", type_table[type]);
	}
	else if (type >= ET_LOOS && type <= ET_HIOS)
	{
		printf("OS Specific: (%4x)\n", type);
	}
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
	{
		printf("Processor Specific: (%4x)\n", type);
	}
	else
	{
		printf("<unknown: %x>\n", type);
	}
}

void print_elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian)
{
	int address_size = bit_mode / 8, i;
	unsigned long entry = 0;

	if (big_endian)
	{
		for (i = 0; i < address_size; ++i)
		{
			entry = (entry << 8) | buffer[i];
		}
	}
	else
	{
		for (i = address_size - 1; i >= 0; --i)
		{
			entry = (entry << 8) | buffer[i];
		}
	}

	printf("  %-34s 0x%lx\n", "Entry point address:", entry);
}
