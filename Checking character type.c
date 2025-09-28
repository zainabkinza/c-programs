//Zainab Kinza Sheikh  (CT-059)

#include<stdio.h>
int main(void)
{
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);
	
	if(character >='A' && character <='Z'){
		printf("Your character is a capital alphabet");
	}
		
		else if(character >='a' && character <='z'){
		printf("Your character is a small alphabet");
	}
		
		else if(character >='0' && character <='9'){
		printf("Your character is a digit");
	}
		
	else{
			printf("Your character is a special character");
		}

	return 0;
	
}
