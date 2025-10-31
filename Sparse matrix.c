#include <stdio.h>
int main() {
	
    int r, c, i, j;
    int matrix[10][10];
    int Zero = 0;   // T = total number of zeros

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter the elements of your matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count zero elements
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(matrix[i][j] == 0)
                Zero++;
        }
    }

    // Check sparse matrix?
    if(Zero >= (r * c) / 2)
        printf("The matrix is a Sparse Matrix.");
    else
        printf("The matrix is not a Sparse Matrix.");

    return 0;
}