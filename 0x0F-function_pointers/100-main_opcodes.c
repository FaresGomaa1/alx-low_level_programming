#include <stdio.h>
#include <stdlib.h>
/**
* print_opcodes - Prints the opcodes of the main function
* @n: Number of bytes to print
*/
void print_opcodes(int n)
{
char *opcode_start;
int i;

if (n < 0)
{
fprintf(stderr, "Error\n");
exit(2);
}

opcode_start = (char *)print_opcodes;
for (i = 0; i < n; i++)
{
printf("%02hhx", opcode_start[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");
}

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 1 on incorrect number of arguments
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Error\n");
return 1;
}

print_opcodes(atoi(argv[1]));

return 0;
}
