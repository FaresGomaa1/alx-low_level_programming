#include "main.h"
#include <unistd.h>

/**
* print_number - prints a number
* @n: The number to be printed
*/
void print_number(unsigned long n)
{
if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}

/**
* print_fibonacci - prints the first 98 Fibonacci numbers
*/
void print_fibonacci(void)
{
unsigned long a = 1, b = 2, temp;
int count;

print_number(a);

for (count = 2; count <= 98; ++count)
{
_putchar(',');
_putchar(' ');
print_number(a);

temp = a + b;
a = b;
b = temp;
}

_putchar('\n');
}

/**
* main - Entry point
*
* Return: 0 on success
*/
int main(void)
{
print_fibonacci();
return (0);
}
