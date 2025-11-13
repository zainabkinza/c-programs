#include <stdio.h>

int main() {
    int x;
    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    if (x == 0) {                
        printf("The integer square root of 0 is 0\n");
        return 0;
    }

    int i = 1;                 
    while (i <= x / i) {     
        i++;
    }

    printf("The integer square root of %d is %d", x, i - 1);
    return 0;
}
