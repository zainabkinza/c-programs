#include <stdio.h>

int isPalindrome(int x) {
    if (x < 0)
        return 0;   // false

    int original = x;
    long long reversed = 0;  // to prevent overflow

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    if (original == reversed)
        return 1;   // true
    else
        return 0;   // false
}