#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
* print_error - Print an error message and exit with a specified status code.
* @message: The error message to print.
* @status: The status code to exit with.
*/
void print_error(const char *message, int status)
{
fprintf(stderr, "%s\n", message);
exit(status);
}

/**
* read_opcodes - Read opcodes from the main function.
* @num_bytes: The number of bytes to read.
*/
void read_opcodes(long num_bytes)
{
FILE *self = fopen("/proc/self/exe", "rb");
char *opcodes = malloc(num_bytes);

if (self == NULL || opcodes == NULL)
print_error("Error: Unable to read opcodes", 3);

fseek(self, 0x104, SEEK_SET);
if (fread(opcodes, 1, num_bytes, self) != num_bytes)
print_error("Error: Unable to read opcodes", 4);

for (long i = 0; i < num_bytes; i++)
{
printf("%02hhx", opcodes[i]);
if (i < num_bytes - 1)
printf(" ");
}

printf("\n");

free(opcodes);
fclose(self);
}

/**
* main - Entry point.
* @argc: Number of arguments.
* @argv: Array of argument strings.
* Return: 0 on success, 1 for incorrect argument count, 2 for negative bytes.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
print_error("Usage: main <number_of_bytes>", 1);

long num_bytes = strtol(argv[1], NULL, 10);

if (num_bytes < 0)
print_error("Error: Negative number of bytes", 2);

read_opcodes(num_bytes);

return (0);
}
