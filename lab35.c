/** lab35.c
* ===========================================================  
* Name: Benjamin Tat
* Section: T6
* Project: Lab 35
* ===========================================================  */

#include <stdio.h>
#include <stdlib.h>

// This function opens, reads, and prints the file
// It is already coded for you . . . you're welcome.
void readFile(char* filename, int numTimes) {
    FILE* file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open %s", filename);
        exit(1);
    }

    while (!feof(file)) {
        char line[100];
        fgets(line, 100, file);
        for (int i=0; i<numTimes; i++) {
            printf("%s\n", line);
        }
    }

    fclose(file);
}

// Reminder
// argc = an int that represents the # of arguments
// argv = an array of strings that contains the arguments themselves

// Modify this function to use command line arguments
int main(int argc, char const *argv[]) {
    // Check number of arguments                                                  
    if( argc != 3 ) {
        printf("Incorrect number of arguments: %d", argc);
        return 1; // 1 indicates error                                              
    }

    readFile(argv[1], atoi(argv[2]));

    return 0;
}