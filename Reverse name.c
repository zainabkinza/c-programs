//Zainab Kinza Sheikh           CT-059

#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[100];
    int i, k = 0, len;

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    for (i = 0; first[i] != '\0'; i++) {
        full[k] = first[i];
        k++; 
    }

    for (i = 0; last[i] != '\0'; i++) {
        full[k] = last[i];
        k++; 
    }

    full[k] = '\0'; 

    len = strlen(full);

    printf("Reversed name: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", full[i]);
    }
    printf("\n");

    return 0;
}
