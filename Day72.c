#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read the file line by line using fgets()
    printf("File content:\n\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);   // Print each line
    }

    fclose(fp);   

    return 0;
}
