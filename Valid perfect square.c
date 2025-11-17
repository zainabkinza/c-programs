#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("false\n");
        return 0;
    }

    int i = 1;
    while (i * i <= num) {
        if (i * i == num) {
            printf("true\n");
            return 0;
        }
        i = i + 1;
    }

    printf("false\n");
    return 0;
}