#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i = i + 1)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i = i + 1) {
        if (nums[i] == 0) {
            for (int j = i + 1; j < n; j = j + 1) {
                if (nums[j] != 0) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i = i + 1)
        printf("%d ", nums[i]);
    printf("\n");

    return 0;
}
