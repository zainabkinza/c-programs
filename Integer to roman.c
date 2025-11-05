#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char roman[50] = " ";

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(roman, symbols[i]);
            num -= values[i];
        }
    }

    printf("Roman number: %s\n", roman);

    return 0;
}