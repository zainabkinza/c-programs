#include <stdio.h>

int main() 
{
    int A, B;
    
    printf("Enter value of A: ");
    scanf("%d", &A);
    printf("Enter value of B: ");
    scanf("%d", &B);

    A = A + B;  
    B = A - B;  
    A = A - B;  

    printf("After swapping:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}