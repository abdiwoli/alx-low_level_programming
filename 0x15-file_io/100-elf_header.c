#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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
		exit(1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error: Can't read from file");
		exit(1);
	}

	if (read(fd, buffer, 18) != 18)
	{
		fprintf(stderr, "Error: Can't read ELF header from file\n");
		close(fd);
		exit(1);
	}

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

void print_elf_class(const unsigned char *buffer)
{
	printf("ELF Class: ");
	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("64-bit\n");
	}
	else if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("32-bit\n");
	}
	else
	{
		printf("Unknown (%02x)\n", buffer[EI_CLASS]);
	}
}

void print_elf_data(const unsigned char *buffer)
{
	printf("ELF Data: ");
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("Little Endian\n");
	}
	else if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("Big Endian\n");
	}
	else
	{
		printf("Unknown (%02x)\n", buffer[EI_DATA]);
	}
}

void print_elf_version(const unsigned char *buffer)
{
	printf("ELF Version: %d\n", buffer[EI_VERSION]);
}

void print_elf_osabi(const unsigned char *buffer)
{
	printf("ELF OS/ABI: ");
	if (buffer[EI_OSABI] < 19)
	{
		static const char *os_table[19] = {
			"UNIX - System V",
			"UNIX - HP-UX",
			"UNIX - NetBSD",
			"UNIX - GNU",
			"Unknown (4)",
			"Unknown (5)",
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
		printf("%s\n", os_table[buffer[EI_OSABI]]);
	}
	else
	{
		printf("Unknown (%02x)\n", buffer[EI_OSABI]);
	}
}

void print_elf_abivers(const unsigned char *buffer)
{
	printf("ELF ABI Version: %d\n", buffer[EI_ABIVERSION]);
}

void print_elf_type(const unsigned char *buffer, int big_endian)
{
	unsigned int type;
	printf("ELF Type: ");

	if (big_endian)
	{
		type = buffer[16] << 8 | buffer[17];
	}
	else
	{
		type = buffer[17] << 8 | buffer[16];
	}

	if (type == ET_NONE)
	{
		printf("None\n");
	}
	else if (type == ET_REL)
	{
		printf("Relocatable\n");
	}
	else if (type == ET_EXEC)
	{
		printf("Executable\n");
	}
	else if (type == ET_DYN)
	{
		printf("Shared Object\n");
	}
	else if (type == ET_CORE)
	{
		printf("Core\n");
	}
	else
	{
		printf("Unknown (%04x)\n", type);
	}
}

void print_elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian)
{
	size_t i;
	size_t address_size = bit_mode / 8;
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
		for (i = address_size; i > 0; --i)
		{
			entry = (entry << 8) | buffer[i - 1];
		}
	}

	printf("Entry Point Address: 0x%lx\n", entry);
}
