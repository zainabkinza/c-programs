#include<stdio.h>
int main(void)
{
	char choice;
	int quantity, totalbill;
	
	printf("-----Menu-----\n\n");
	printf("Burger (B/b)\n");
	printf("French fries (F/f)\n");
	printf("Pizza (P/p)\n");
	printf("Sandwiches (S/s)\n\n");
	printf("--------------\n");
	printf("Choose your order: ");
	scanf("%c", &choice);
	
	printf("Enter quantity: ");
	scanf("%d", &quantity);
	
	switch(choice){
		case 'B':
		case 'b': 
		totalbill = 200 * quantity;
		printf("Total bill: Rs. %d", totalbill);
		break;
		
		case 'F':
		case 'f': 
		totalbill = 50 * quantity;
		printf("Total bill: Rs. %d", totalbill);
		break;
		
		case 'P':
		case 'p': 
		totalbill = 500 * quantity;
		printf("Total bill: %d", totalbill);
		break;
		
		case 'S':
		case 's': 
		totalbill = 150 * quantity;
		printf("Total bill: %d", totalbill);
		break;
		
		default:
			printf("Invalid order!");
			break;
	}
	
	return 0;
	
}