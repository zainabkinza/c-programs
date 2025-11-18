#include <stdio.h>

int main() {
    int n, reversed = 0;

    scanf("%d", &n);

    for (int i = 0; i < 32; i++) {
        reversed = (reversed << 1) | (n & 1);
        n = n >> 1;
    }

    printf("%d", reversed);

    return 0;
}
