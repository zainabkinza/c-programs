#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

	int nsp=n-1;
	
	for (int i = 1; i <= n; i++) {
            for (int q = 1; q <= nsp; q++) {
                printf(" ");
            }
            nsp--;
            for (int j = 1; j <= i; j++) {
                printf("%c", 'A'+j-1);
            }
            int a= i-1;
            for(int k=1; k<=i-1; k++){
            	printf("%c", 'A'+a-1);
            	a--;
			}
        printf("\n"); // move to next line after each row
    }
}