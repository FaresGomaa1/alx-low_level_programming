#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * 
 * Return: 0 on success.
 */
int main(void)
{
    int i;
    char password[100];

    srand(time(0)); // seed the random number generator

    /* Generate random characters to form the password */
    for (i = 0; i < 10; i++) // Here, 10 characters long. You can adjust accordingly
    {
        password[i] = (rand() % 94) + 33; // This generates random printable characters
    }
    password[i] = '\0';

    printf("%s\n", password);

    return (0);
}
