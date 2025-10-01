//Zainab Kinza Sheikh  (CT-059)

#include<stdio.h>
int main(void)
{
	
	int cost;
	float discount, amountsaved, amountafterdiscount;
	
	printf("Enter your total shopping cost: ");
	scanf("%d", &cost);
	
	if(cost <= 1999){
	printf("Discount can only be availed on purchases of atleast Rs.2000");
}

    else if(cost >= 2000 && cost <= 4000){
	discount = cost * (20.0/100);
}

    else if(cost > 4000 && cost <= 6000){
    discount = cost * (30.0/100);
}

    else if(cost > 6000){
	discount = cost * (50.0/100);
}

amountsaved = discount ;
amountafterdiscount = cost - discount;

printf("Your actual cost was: Rs.%d\n", cost);
printf("You saved: Rs.%f\n", discount);
printf("Your discounted amount is: Rs.%f\n", amountafterdiscount);

return 0;

}