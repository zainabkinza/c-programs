#include<stdio.h>
int main(void)
{
	
	int number, lastdigit, rest, newnumber, numdouble;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	lastdigit = number%10;                //get last digit
	numdouble = lastdigit * 2;            //double it
	rest = number / 10;                   // rest of the number            
	newnumber = rest - numdouble;         //apply rule
	
	lastdigit = number%10;                //get last digit
	numdouble = lastdigit * 2;            //double it
	rest = number / 10;                   // rest of the number            
	newnumber = rest - numdouble;         //apply rule
	
	lastdigit = number%10;                //get last digit
	numdouble = lastdigit * 2;            //double it
	rest = number / 10;                   // rest of the number            
	newnumber = rest - numdouble;         //apply rule
	
	if(newnumber%7 == 0 ){
		printf("Divisible by 7");
	}
	else{
		printf("Not divisible by 7");
	}
	
	return 0;
	
}
