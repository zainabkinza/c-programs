#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    puts("Enter a string:");
    fgets(s, sizeof(s), stdin); 

    char clean[1000];
    int j = 0;

    // CLEAN THE STRING
    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] >= '0' && s[i] <= '9') {
            clean[j++] = s[i];
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            clean[j++] = s[i] + ('a' - 'A');
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            clean[j++] = s[i];
        }
    }

    clean[j] = '\0';



    // CHECK PALINDROME
    int l = 0;
    int r = strlen(clean) - 1;

    while (l < r) {
        if (clean[l] != clean[r]) {
            printf("false");
            return 0;
        }
        l++;
        r--;
    }

    printf("true");
    return 0;
}