#include <stdio.h>
int main() {
	
    int nums[100];
    int size, val;
    int k = 0; 

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    for (int i = 0; i < size; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    printf("\nNew array after removing %d: ", val);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    printf("\nTotal elements left: %d\n", k);

    return 0;
}