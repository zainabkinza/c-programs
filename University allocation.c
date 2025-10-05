#include <stdio.h>
int main(void)
{
    float nts, fsc;
    
    printf("Enter your NTS marks: ");
    scanf("%f", &nts);
    
    printf("Enter your FSC marks: ");
    scanf("%f", &fsc);
    
    if(fsc > 70 && nts >= 70){
        printf("You have been selected in the IT department of the Oxford university");
    }
    
    else if(fsc > 70 && nts >= 60){
        printf("You have been selected in the Electronics department of the Oxford university");
    }
    
    else if(fsc > 70 && nts >= 50){
        printf("You have been selected in the Telecommunication department of the Oxford university");
    }
    
    else if((fsc <= 70 && fsc > 60) && (nts >= 50)){
        printf("You have been selected in the IT department of the MIT university");
    }
    
    else if((fsc <= 60 && fsc > 50) && (nts >= 50)){
        printf("You have been selected in the Chemical department of the MIT university");
    }
    
    else if((fsc <= 50 && fsc > 40) && (nts >= 50)){
        printf("You have been selected in the Computer department of the MIT university");
    }
    
    else{
        printf("You have not been selected in any university");
    }
    
    return 0;
}