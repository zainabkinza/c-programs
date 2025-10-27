#include<stdio.h>
int main(){
	
	int n, i, numbers[15];
	float Average;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("Enter %d numbers: ", n);
	for(i=0; i<n; i++){
		scanf("%d", &numbers[i]);
	}
	float sum = 0;
	int count = 0;
	for(i=0; i<n; i++){
		if(numbers[i]>0){
		sum= sum + numbers[i];
		count++;
	}
	}
	
	if(count>0){
	Average = sum/count;
	printf("Sum of positive numbers= %.2f\n", sum);
	printf("Average of postive numbers= %.2f\n", Average);
}
    else{
    	printf("No positive numbers entered.");
	}
	
	return 0;
	
}