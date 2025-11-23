#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // Flag to check if we are inside a word

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        
        if (ch == '\n')
            lines++;

        
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        } 
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
