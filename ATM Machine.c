#include<stdio.h>
int main(void)
{
	int select;
	float balance = 5000.0, withdraw, deposit;
	
	printf("----ATM Machine----\n");
	printf("1. Check Balance\n");
	printf("2. Withdraw Money\n");
	printf("3. Deposit Money\n");
	printf("4. Exit\n\n");
	printf("Select one option: ");
	scanf("%d", &select);
	
	switch(select){
	case 1:
	printf("Your current balance is: Rs. %.2f\n", balance);
	break;
	
	case 2:
	printf("Enter amount to withdraw: Rs ");
	scanf("%f", &withdraw);
	if (withdraw > balance){
	printf("Insufficient Balance.\n");
	}
	else if (withdraw <= balance){
	balance = balance - withdraw;
	printf("Withdrawal Successful. New Balance: Rs %.2f\n", balance);
	break;
}
	case 3:
	printf("Enter amount to deposit: Rs ");
	scanf("%f", &deposit);
	balance = balance + deposit;
	printf("Deposit Successful. New Balance: Rs %.2f\n", balance);
	break;
	 
	case 4:
	printf("Thankyou for using this ATM. Goodbye!\n");
	break;
	
	default:
	printf("Invalid Option.\n");
	
	}
	
	return 0;
	
	
}