#include <stdio.h>

int main() {
    int mark;
    int passCount = 0, failCount = 0;
    int consecutiveFails = 0;

    printf("Enter marks (type -1 when you are done):\n");

    while (1) {
        scanf("%d", &mark);

        if (mark == -1)
            break;  // stop when user enters -1

        if (mark >= 50) {
            passCount++;
            consecutiveFails = 0;  // reset fail streak
        } else {
            failCount++;
            consecutiveFails++;    // increase fail streak
        }

        if (consecutiveFails > 3) {  // more than 3 fails in a row
            printf("Too many fails in a row! Stopping input.\n");
            break;
        }
    }

    printf("\nTotal passing: %d", passCount);
    printf("\nTotal failing: %d\n", failCount);

    return 0;
}