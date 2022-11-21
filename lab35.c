/** lab35.c
* ===========================================================  
* Name: FIRST LAST, DATE
* Section: SECTION
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


// Modify this function to use command line arguments
int main() {

}