#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break; 
        }
        i++;
    }

    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are equal");
    } 
    else {
        if (str1[i] > str2[i])
            printf("First string is greater than the second string");
        else if (str1[i] < str2[i])
            printf("Second string is greater than the first string");
    }

    return 0;
}