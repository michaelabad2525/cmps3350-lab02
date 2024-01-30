// CMPS 3350 - lab 02 is all about source control
// Prints each command-line argument passed into the program, one per line
// Michael AJ Abad
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[argc-i]);
    }
    return 0;
}

