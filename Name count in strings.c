#include <stdio.h>
#include <string.h>

int main() {
    char firstname[50], lastname[50], fullname[100];
    int length;

    printf("Enter your first name: ");
    gets(firstname);  

    printf("Enter your last name: ");
    gets(lastname);

    strcpy(fullname, firstname);    // Copy first name into fullName

    strcat(fullname, " ");    // Add a space between first and last name

    strcat(fullname, lastname);    // Add last name to fullName

    length = strlen(fullname);    // Count total number of characters

    printf("Your full name is: %s\n", fullname);
    printf("Number of characters in your full name are: %d", length);

    return 0;
}
