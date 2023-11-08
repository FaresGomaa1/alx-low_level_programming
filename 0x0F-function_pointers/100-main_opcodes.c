#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Prints the opcodes of its own main function
* @argc: Number of arguments
* @argv: Array of argument strings
*
* Return: 0 on success, 1 for incorrect argument count, 2 for negative bytes
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

char cmd[100];
snprintf(cmd, sizeof(cmd), "objdump -d -j.text -M intel %s | awk '{print $2}' | xxd -r -p", argv[0]);

FILE *fp = popen(cmd, "r");

if (fp == NULL)
{
printf("Error\n");
return (3);
}

char opcode[3];
int count = 0;

while (fread(opcode, sizeof(char), 2, fp) == 2)
{
printf("%s", opcode);

if (++count >= num_bytes)
break;
}

pclose(fp);

printf("\n");

return (0);
}
