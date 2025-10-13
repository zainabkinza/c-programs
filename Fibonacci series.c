#include <stdio.h>

int main() {
    int a = 0, b = 1, c;

    printf("Fibonacci numbers up to 500 (skip divisible by 5, stop if >300):\n");

    while (a <= 500) {
        if (a > 300)
            break;

        if (a % 5 != 0 || a == 0)   // print only if not divisible by 5 or zero
            printf("%d ", a);

        c = a + b;  // Always updating for next Fibonacci number
        a = b;
        b = c;
    }

    return 0;
}



