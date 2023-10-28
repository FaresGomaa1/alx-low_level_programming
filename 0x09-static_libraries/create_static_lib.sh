#!/bin/bash

# Compile all the .c files in the directory to .o files
gcc -c *.c

# Archive all the .o files into a library named liball.a
ar -rc liball.a *.o

# Clean up the .o files, if desired
rm *.o
