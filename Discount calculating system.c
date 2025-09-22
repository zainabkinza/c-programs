#include<stdio.h>
int main(void)
{
	float amount, discount, finalprice;
	printf("Enter the purchase amount: Rs ");
	scanf("%f", &amount);
	
	if(amount < 1000){
    discount = 0;
	
}   else if(amount >= 1000 && amount <= 2000){
	discount = amount * 0.05;

}   else{
    discount = amount * 0.10;
}
		
    finalprice = amount - discount;

printf("Original Amount: Rs%.2f\n ", amount);
printf("Discount: Rs%.2f\n ", discount);
printf("Final price after discount: Rs%.2f ", finalprice);

return 0;
	
}