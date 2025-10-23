#include<stdio.h>
int main(void)
{
	int limit=5;
	
	for(int i=1; i<=5; i++){
		
		for(int j=i; j<5; j++){
			printf(" ");
		}
		for(int j=1; j<=(2*i-1); j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}