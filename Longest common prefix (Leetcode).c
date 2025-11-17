#include <stdio.h>

int main() {
    int strsSize;
    printf("Enter number of strings: ");
    scanf("%d", &strsSize);
    getchar();

    char strs[50][100];

    for (int i = 0; i < strsSize; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strs[i], sizeof(strs[i]), stdin);
        
        int j = 0;
        while (strs[i][j] != '\0') {
            if (strs[i][j] == '\n') {
                strs[i][j] = '\0';
                break;
            }
            j++;
        }
    }

    int i = 0;
    while (1) {
        char c = strs[0][i];
        if (c == '\0') break;

        int mismatch = 0;
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                mismatch = 1;
                break;
            }
        }

        if (mismatch) break;
        i++;
    }

    printf("Longest common prefix: ");
    for (int k = 0; k < i; k++)
        putchar(strs[0][k]);
    putchar('\n');

    return 0;
}