#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* print_elf_header - Prints information from the ELF header.
* @hdr: Pointer to the ELF header structure.
*/
void print_elf_header(Elf64_Ehdr *hdr)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x%c", hdr->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
printf("  Class:                             ");
switch (hdr->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Data:                              ");
switch (hdr->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Version:                           %d (current)\n", hdr->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (hdr->e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
default:
printf("<unknown: %d>\n", hdr->e_ident[EI_OSABI]);
break;
}
printf("  ABI Version:                       %d\n", hdr->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (hdr->e_type)
{
case ET_NONE:
printf("NONE (Unknown type)\n");
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
printf("<unknown: %x>\n", hdr->e_type);
break;
}
printf("  Entry point address:               0x%lx\n", hdr->e_entry);
}

/**
* main - Entry point
* @argc: Number of arguments.
* @argv: Array of arguments.
*
* Return: 0 on success, 98 on error.
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr ehdr;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
{
dprintf(STDERR_FILENO, "Error: Unable to read ELF header from file %s\n", argv[1]);
close(fd);
exit(98);
}

if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
ehdr.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
close(fd);
exit(98);
}

print_elf_header(&ehdr);

close(fd);

return 0;
}
