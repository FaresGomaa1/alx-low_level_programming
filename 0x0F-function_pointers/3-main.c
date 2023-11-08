#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char *argv[])
{
int num1, num2;
int result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]);

if (!operation)
{
printf("Error\n");
return (99);
}
result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
