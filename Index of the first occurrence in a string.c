#include <stdio.h>
#include <string.h>

int main() {
    char haystack[100], needle[100];
    int i, j, found;
    int index = -1;  // default: not found

    printf("Enter haystack: ");
    fgets(haystack, sizeof(haystack), stdin);
    haystack[strcspn(haystack, "\n")] = '\0'; // remove newline

    printf("Enter needle: ");
    fgets(needle, sizeof(needle), stdin);
    needle[strcspn(needle, "\n")] = '\0'; // remove newline

    int len1 = strlen(haystack);
    int len2 = strlen(needle);

    if (len2 == 0) {
        index = 0; 
    } else {
        for (i = 0; i <= len1 - len2; i++) {
            found = 1;
            for (j = 0; j < len2; j++) {
                if (haystack[i + j] != needle[j]) {
                    found = 0;
                    break;
                }
            }
            if (found == 1) {
                index = i;
                break;  
            }
        }
    }

    if (index != -1)
        printf("Output: %d", index);
    else
        printf("Output: not found");

    return 0;
}