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
* main - prints the first 98 Fibonacci numbers
*
* Return: 0 on success
*/
int main(void)
{
unsigned long a = 1, b = 2, temp;
int count;

for (count = 1; count <= 98; ++count)
{
print_number(a);

if (count < 98)
{
_putchar(',');
_putchar(' ');
}

temp = a + b;
a = b;
b = temp;
}

_putchar('\n');

return (0);
}
