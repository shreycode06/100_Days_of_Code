#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
