#include <stdio.h>
int main(void)
{
    char coffee, cupsize;

    printf("Type of coffee (B for Black, W for White): ");
    scanf(" %c", &coffee);

    printf("Is your cup double sized? (Y/N): ");
    scanf(" %c", &cupsize);


    switch (coffee) {
        case 'W':
        case 'w':
                
            switch (cupsize) {
                case 'Y':
                case 'y':
                     printf("Preparing your coffee. Waiting time: 114 mins");
                     break;
                
				case 'N':
                case 'n':
                         printf("Preparing your coffee. Waiting time: 76 mins");  
                    break;
                default:
                    printf("Invalid input for cup size!\n");
                    break;
      			}
            break;

        case 'B':
        case 'b':
                
            switch (cupsize) {
                case 'Y':
                case 'y':
                     printf("Preparing your coffee. Waiting time: 157.5 mins");
                    break;
                case 'N':
                case 'n':
                	printf("Preparing your coffee. Waiting time: 105 mins");
                    break;
                default:
                    printf("Invalid input for cup size!\n");
            }
            break;

            printf("Your coffee is ready. Enjoy!");

        default:
            printf("Invalid coffee type!\n");
    }
    

    return 0;
}