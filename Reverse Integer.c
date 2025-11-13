#include <stdio.h>
int main() {
	
    int x, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int sign;
    if(x < 0)
        sign = -1;
    else
        sign = 1;

    if(x < 0)
        x = -x;  

    while(x > 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    rev = rev * sign;

    printf("Reversed number: %d", rev);
    return 0;
}