#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        int isPrime = 1;  
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }

    printf("The number of prime numbers that are strictly less than n is: %d", count);

    return 0;
}
