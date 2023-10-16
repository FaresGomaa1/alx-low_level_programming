#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

long checksum(char *str) {
    long sum = 0;
    while (*str) {
        sum += (unsigned char)(*str);
        str++;
    }
    return sum;
}

int main(void) {
    char password[100];
    int i, len;

    srand(time(0));

    while (1) {
        len = (rand() % 10) + 1;

        for (i = 0; i < len; i++) {
            password[i] = (rand() % 94) + 33;
        }
        password[i] = '\0';

        if (checksum(password) == 0xad4) {
            printf("%s\n", password);
            break;
        }
    }
    return 0;
}
