#include <stdio.h>

int main(void)
{
    int n, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial does not exist for negative numbers");
    } 
    else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("The factorial of %d is: %d", n, factorial);
    }

    return 0;
}