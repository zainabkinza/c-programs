#include <stdio.h>

int main() {
    int n;
    printf("Enter number of digits: ");
    scanf("%d", &n);

    int arr[50];   
    printf("Enter digits: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < 9) {
            arr[i]++;
            break;
        } else {
            arr[i] = 0;
            if (i == 0) {
                for (int j = n; j > 0; j--) {
                    arr[j] = arr[j - 1];
                }
                arr[0] = 1;
                n++;
            }
        }
    }

    printf("Result: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}