#include <stdio.h>
#include <stdint.h>
#include <elf.h>
#include <stdlib.h>
void print_ident_magic(const unsigned char *e_ident)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

void print_basic_info(const Elf32_Ehdr *header) {
	printf("Class: %d\n", header->e_ident[EI_CLASS]);
	printf("Data: %d\n", header->e_ident[EI_DATA]);
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%08x\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	Elf32_Ehdr header;
	const char* file_path;
	FILE* file;

	if (argc < 2)
		exit(98);

	file_path = argv[1];
	file = fopen(file_path, "rb");
	if (file == NULL)
		exit(98);
	if (fread(&header, sizeof(Elf32_Ehdr), 1, file) != 1)
	{
		fclose(file);
		exit(98);
	}

	fclose(file);

	print_ident_magic(header.e_ident);
	print_basic_info(&header);

	return (0);
}
