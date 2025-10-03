#include<stdio.h>
int main(void)
{
	
	char select;
	
	printf("Are you sure to delete this file? (Y/y) or (N/n) ");
	scanf("%c", &select);
	
	
	switch(select){
	case 'Y':
		printf("Deleted successfully.");
        break;
        
    case 'y':
        printf("Deleted successfully.");
        break;
        
    case 'N':
    	printf("Delete Cancelled.");
    	break;
    	
    case 'n':
    	printf("Delete Cancelled.");
    	break;
    	
    default:
    	printf("Choose the right option.");
    	break;
    }
		

	
	return 0;
		
}