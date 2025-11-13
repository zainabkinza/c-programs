#include <stdio.h>

int main() {
    int n;
    printf("Enter number of steps: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Number of ways = 1");
        return 0;
    }

    int a = 1, b = 2;  
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }

    printf("Number of ways = %d", b);
    return 0;
}