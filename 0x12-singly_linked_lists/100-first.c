#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
* before_main - Function to be executed before main.
*/
void before_main(void)
{
const char *line1 = "You're beat! and yet, you must allow,\n";
const char *line2 = "I bore my house upon my back!\n";

printf("%s%s", line1, line2);
}
