#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, len, count = 0;

    printf("Enter a string: ");
    gets(string); 

    len = strlen(string);

    i = len - 1;

    while (i >= 0 && string[i] == ' ')
        i--;

    while (i >= 0 && string[i] != ' ') {
        count++;
        i--;
    }

    printf("Length of last word: %d\n", count);

    return 0;
}