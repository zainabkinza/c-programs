#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    
    printf("Enter the string: ");
    scanf("%s", s);

    int i = 0;
    int j = strlen(s) - 1;
    char temp;

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i = i + 1;
        j = j - 1;
    }

    printf("Reversed string: %s", s);

    return 0;
}
