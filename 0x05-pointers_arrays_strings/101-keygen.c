#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];
	const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = characters[rand() % (sizeof(characters) - 1)];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
