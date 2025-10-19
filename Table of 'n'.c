#include<stdio.h>
int main(void){
	
	int n;
	printf("Enter a number whose table you want to print: ");
	scanf("%d",&n);
	
	for(int i=n; i<=n*10; i=i+n){
		printf("%d\n", i);
	}
	return 0;
}