#include <stdio.h>
int main() {
	
    int n, i, j;
    int A[10][10], transpose[10][10];
    int symmetric = 1; // assume matrix is symmetric

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of %dx%d matrix:", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Transpose
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = A[i][j];
        }
    }

    // Check if A = transpose
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(A[i][j] != transpose[i][j]) {
                symmetric = 0; // not symmetric
                break;
            }
        }
    }

    // Print original matrix
    printf("\nMatrix A:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print transpose
    printf("\nTranspose of Matrix A:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    // Check and print result
    if(symmetric == 1){
        printf("\nMatrix is Symmetric");}
    else{
        printf("\nMatrix is Asymmetric");
    }

    return 0;
}