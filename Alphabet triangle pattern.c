#include<stdio.h>
int main(void)
{
int n=6;
int i,j;


	for(int i=1; i<=n; i++){
			char a = 'A';
		
			for(int j=1; j<i ; j++){
			
				printf(" ");
			}
			
		for(int j=i; j<=n; j++){
		
			printf("%c",'A'+(j-i));
		}
		printf("\n");
	}
return 0;	
}